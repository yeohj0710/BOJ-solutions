#include <cstdio>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

struct Coor { long long x, y; };
vector<Coor> Point;

double Abs(double a) { return a>=0?a:-a; }

long long CCW(Coor a, Coor b, Coor c) {
    return a.x*b.y + b.x*c.y + c.x*a.y - a.x*c.y - b.x*a.y - c.x*b.y;
}

bool minCCW(Coor a, Coor b) {
    long long Value = CCW(Point[0], a, b);
    if(Value) return Value > 0;
    else if(a.y != b.y) return a.y < b.y;
    else return a.x < b.x;
}

int main() {
    int N;
    double Area = 0;
    Coor temp1, temp2, First, Pop1, Pop2;
    stack<Coor> Convex;
    scanf("%d", &N);
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
            temp2 = Convex.top();
            Convex.pop();
            temp1 = Convex.top();
            if(CCW(temp1, temp2, Point[i]) > 0) {
                Convex.push(temp2);
                break;
            }
        }
        Convex.push(Point[i]);
    }
    First = Convex.top();
    Convex.pop();
    Pop1 = Convex.top();
    Convex.pop();
    while(!Convex.empty()) {
        Pop2 = Convex.top();
        Convex.pop();
        Area += 0.5 * Abs((double)CCW(First, Pop1, Pop2));
        Pop1 = Pop2;
    }
    printf("%d", (int)(Area/50));
}
