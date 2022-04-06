#include <cstdio>
#include <vector>
#include <stack>
#include <algorithm>
#include <cmath>
using namespace std;

struct Coor { long long x, y; };
Coor operator-(Coor a, Coor b) {
    Coor c;
    c.x = a.x - b.x;
    c.y = a.y - b.y;
    return c;
}
vector<Coor> Point;

double Abs(double a) { return a>=0?a:-a; }
long long CCW(Coor a, Coor b, Coor c) { return a.x*(b.y-c.y) + b.x*(c.y-a.y) + c.x*(a.y-b.y); }
int DistSq(Coor a, Coor b) { return (a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y); }

bool minCCW(Coor a, Coor b) {
    long long Value = CCW(Point[0], a, b);
    if(Value != 0) return Value > 0;
    else if(a.y != b.y) return a.y < b.y;
    else return a.x < b.x;
}

int main() {
    int N;
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

    stack<Coor> Convex;
    Coor Temp1, Temp2;
    Convex.push(Point[0]);
    Convex.push(Point[1]);
    for(int i=2; i<N; i++) {
        while(Convex.size() >= 2) {
            Temp2 = Convex.top();
            Convex.pop();
            Temp1 = Convex.top();
            if(CCW(Temp1, Temp2, Point[i]) > 0) {
                Convex.push(Temp2);
                break;
            }
        }
        Convex.push(Point[i]);
    }
    vector<Coor> Vertex;
    int Size = Convex.size();
    Vertex.resize(Size);
    for(int i=Size-1; i>=0; i--) {
        Vertex[i] = Convex.top();
        Convex.pop();
    }

    int LPoint = 0, RPoint = 0;
    for(int i=0; i<Size; i++) {
        if(Vertex[i].x < Vertex[LPoint].x) LPoint = i;
        if(Vertex[i].x > Vertex[RPoint].x) RPoint = i;
    }
    int DiaSq = DistSq(Vertex[LPoint], Vertex[RPoint]);
    Coor Origin; Origin.x = 0, Origin.y = 0;
    for(int i=0; i<Size; i++) {
        if(CCW(Origin, Vertex[(LPoint+1)%Size]-Vertex[LPoint], Vertex[RPoint]-Vertex[(RPoint+1)%Size]) > 0)
            LPoint = (LPoint + 1)%Size;
        else RPoint = (RPoint + 1)%Size;
        if(DistSq(Vertex[LPoint], Vertex[RPoint]) > DiaSq)
            DiaSq = DistSq(Vertex[LPoint], Vertex[RPoint]);
    }
    printf("%.7lf", sqrt(DiaSq));
}
