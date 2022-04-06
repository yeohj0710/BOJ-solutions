#include <cstdio>
#include <vector>
#include <stack>
#include <algorithm>
#include <cmath>
#define INF 1000000001
using namespace std;

struct Coor { long long x, y; };
vector<Coor> Point;

long long CCW(Coor a, Coor b, Coor c) {
    return a.x*(b.y - c.y) + b.x*(c.y - a.y) + c.x*(a.y - b.y);
}

bool minCCW(Coor a, Coor b) {
    long long Value = CCW(Point[0], a, b);
    if(Value) return Value > 0;
    else if(a.y != b.y) return a.y < b.y;
    else return a.x < b.x;
}

int main() {
    int N, R;
    double Ans = 0;
    Coor First, Prev, Cur;
    stack<Coor> Convex;
    scanf("%d %d", &N, &R);
    Point.resize(N);
    for(int i=0; i<N; i++) scanf("%lld %lld", &Point[i].x, &Point[i].y);
    for(int i=1; i<N; i++) {
        if(Point[i].y < Point[0].y || (Point[i].y == Point[0].y && Point[i].x < Point[0].x)) {
            long long temp = Point[0].x;
            Point[0].x = Point[i].x;
            Point[i].x = temp;
            temp = Point[0].y;
            Point[0].y = Point[i].y;
            Point[i].y = temp;
        }
    }
    sort(Point.begin()+1, Point.end(), minCCW);
    Convex.push(Point[0]);
    Convex.push(Point[1]);
    for(int i=2; i<N; i++) {
        while(Convex.size() >= 2) {
            Coor temp2 = Convex.top();
            Convex.pop();
            Coor temp1 = Convex.top();
            if(CCW(temp1, temp2, Point[i]) >= 0) {
                Convex.push(temp2);
                break;
            }
        }
        Convex.push(Point[i]);
    }
    First = Convex.top();
    Prev = Convex.top();
    Convex.pop();
    while(!Convex.empty()) {
        Cur = Convex.top();
        Convex.pop();
        Ans += sqrt((Cur.x-Prev.x)*(Cur.x-Prev.x)+(Cur.y-Prev.y)*(Cur.y-Prev.y));
        Prev = Cur;
    }
    Ans += sqrt((Cur.x-First.x)*(Cur.x-First.x)+(Cur.y-First.y)*(Cur.y-First.y));
    printf("%.9lf", Ans+2*R*3.141592653);
}
