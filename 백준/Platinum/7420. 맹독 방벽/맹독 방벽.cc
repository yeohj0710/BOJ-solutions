#include <cstdio>
#include <vector>
#include <stack>
#include <algorithm>
#include <cmath>
#define Pi 3.14159265358979
using namespace std;

struct Coor { long long x, y; };
vector<Coor> Point;

long long CCW(Coor a, Coor b, Coor c) {
    return a.x*b.y + b.x*c.y + c.x*a.y - a.x*c.y - b.x*a.y - c.x*b.y;
}

bool minCCW(Coor a, Coor b) {
    long long Value = CCW(Point[0], a, b);
    if(Value) return Value > 0;
    else if(a.y != b.y) return a.y < b.y;
    else return a.x < b.x;
}

double Dist(Coor a, Coor b) {
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}

int main() {
    int N, L;
    scanf("%d %d", &N, &L);
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

    stack<Coor> Convex;
    Convex.push(Point[0]);
    Convex.push(Point[1]);
    for(int i=2; i<N; i++) {
        while(Convex.size() >= 2) {
            Coor temp2 = Convex.top();
            Convex.pop();
            Coor temp1 = Convex.top();
            if(CCW(temp1, temp2, Point[i]) > 0) {
                Convex.push(temp2);
                break;
            }
        }
        Convex.push(Point[i]);
    }

    double Circum = 0;
    Coor First = Convex.top();
    Coor temp1 = Convex.top();
    Coor temp2;
    Convex.pop();
    while(!Convex.empty()) {
        temp2 = Convex.top();
        Convex.pop();
        Circum += Dist(temp1, temp2);
        temp1 = temp2;
    }
    Circum += Dist(temp2, First);
    printf("%.0lf", Circum + 2*Pi*L);
}
