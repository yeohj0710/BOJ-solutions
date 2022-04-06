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
vector<Coor> Set1, Set2, Point;

long long CCW(Coor a, Coor b, Coor c) {
    return a.x*(b.y-c.y) + b.x*(c.y-a.y) + c.x*(a.y-b.y);
}

bool minCCW(Coor a, Coor b) {
    long long Value = CCW(Point[0], a, b);
    if(Value != 0) return Value > 0;
    else if(a.x != b.x) return a.x < b.x;
    else return a.y < b.y;
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    Set1.resize(N), Set2.resize(M), Point.resize(N*M);
    for(int i=0; i<N; i++) scanf("%lld %lld", &Set1[i].x, &Set1[i].y);
    for(int i=0; i<M; i++) scanf("%lld %lld", &Set2[i].x, &Set2[i].y);
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) {
            Point[i*M+j].x = Set1[i].x + Set2[j].x;
            Point[i*M+j].y = Set1[i].y + Set2[j].y;
        }
    for(int i=1; i<N*M; i++) {
        if(Point[i].x < Point[0].x || (Point[i].x == Point[0].x && Point[i].y < Point[0].y)) {
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
    for(int i=2; i<N*M; i++) {
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
    printf("%d\n", Size);
    for(int i=0; i<Size; i++) printf("%lld %lld\n", Vertex[i].x, Vertex[i].y);
}
