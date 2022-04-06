// Solution of BOJ #8927
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

struct Point { long long x, y; };
Point operator-(Point A, Point B) {
    Point C;
    C.x = A.x - B.x;
    C.y = A.y - B.y;
    return C;
}
vector<Point> Points;

long long Cross(Point A, Point B, Point C) {
    return A.x*(B.y-C.y) + B.x*(C.y-A.y) + C.x*(A.y-B.y);
}

long long DistSq(Point A, Point B) {
    return (A.x-B.x)*(A.x-B.x) + (A.y-B.y)*(A.y-B.y);
}

bool MinCross(Point A, Point B) {
    long long Value = Cross(Points[0], A, B);
    if(Value != 0) return Value > 0;
    else if(A.y != B.y) return A.y < B.y;
    else return A.x < B.x;
}

int main() {
    int T, N;
    scanf("%d", &T);
    for(int t=0; t<T; t++) {
        scanf("%d", &N);
        Points.resize(N*4);
        for(int i=0; i<N; i++) {
            long long xCorner, yCorner, w;
            scanf("%lld %lld %lld", &xCorner, &yCorner, &w);
            Points[i*4].x = xCorner, Points[i*4].y = yCorner;
            Points[i*4+1].x = xCorner+w, Points[i*4+1].y = yCorner;
            Points[i*4+2].x = xCorner, Points[i*4+2].y = yCorner+w;
            Points[i*4+3].x = xCorner+w, Points[i*4+3].y = yCorner+w;
        }
        for(int i=1; i<N*4; i++)
            if(Points[i].y < Points[0].y
               || (Points[i].y == Points[0].y && Points[i].x < Points[0].x))
                    swap(Points[0], Points[i]);
        sort(Points.begin()+1, Points.end(), MinCross);

        vector<Point> Convex;
        Point Temp1, Temp2, First;
        Convex.push_back(Points[0]);
        Convex.push_back(Points[1]);
        for(int i=2; i<N*4; i++) {
            while(Convex.size() >= 2) {
                Temp2 = Convex.back();
                Convex.pop_back();
                Temp1 = Convex.back();
                if(Cross(Temp1, Temp2, Points[i]) > 0) {
                    Convex.push_back(Temp2);
                    break;
                }
            }
            Convex.push_back(Points[i]);
        }

        int Size = Convex.size(), LPoint = 0, RPoint = 0;
        for(int i=0; i<Size; i++) {
            if(Convex[i].x < Convex[LPoint].x) LPoint = i;
            if(Convex[i].x > Convex[RPoint].x) RPoint = i;
        }
        int DiaSq = DistSq(Convex[LPoint], Convex[RPoint]);
        Point Origin; Origin.x = 0, Origin.y = 0;
        for(int i=0; i<Size; i++) {
            if(Cross(Origin, Convex[(LPoint+1)%Size]-Convex[LPoint], Convex[RPoint]-Convex[(RPoint+1)%Size]) > 0)
                LPoint = (LPoint + 1)%Size;
            else RPoint = (RPoint + 1)%Size;
            if(DistSq(Convex[LPoint], Convex[RPoint]) > DiaSq)
                DiaSq = DistSq(Convex[LPoint], Convex[RPoint]);
        }
        printf("%lld\n", DiaSq);
    }
}
