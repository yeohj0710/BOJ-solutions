#include <cstdio>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

struct Point { long long x, y; };
Point operator-(Point A, Point B) {
    Point C;
    C.x = A.x - B.x, C.y = A.y - B.y;
    return C;
}
vector<Point> Poly, Poly2, Points;

long long Cross(Point A, Point B, Point C) {
    Point AB = B-A;
    Point AC = C-A;
    return AB.x*AC.y - AB.y*AC.x;
}

bool isInPoly(vector<Point> &Poly, Point P) {
    int Size = Poly.size();
    Point Origin; Origin.x = 0, Origin.y = 0;
    Point LeftV = Poly[Size-1] - Poly[0];
    Point RightV = Poly[1] - Poly[0];
    Point PointV = P - Poly[0];
    if(Cross(Origin, LeftV, PointV) > 0) return false;
    if(Cross(Origin, RightV, PointV) < 0) return false;

    int Left = 1, Right = Size - 1;
    while(Left+1 < Right) {
        int Mid = (Left + Right)/2;
        Point MidV = Poly[Mid] - Poly[0];
        if(Cross(Origin, MidV, PointV) > 0) Left = Mid;
        else Right = Mid;
    }
    Point V1 = P - Poly[Left];
    Point V2 = Poly[Left+1] - P;
    return Cross(Origin, V1, V2) <= 0;
}

int main() {
    int N, M, K;
    scanf("%d %d %d", &N, &M, &K);
    Poly.resize(N), Poly2.resize(M), Points.resize(K);
    for(int i=0; i<N; i++) scanf("%lld %lld", &Poly[i].x, &Poly[i].y);
    for(int i=0; i<M; i++) scanf("%lld %lld", &Poly2[i].x, &Poly2[i].y);
    for(int i=0; i<K; i++) scanf("%lld %lld", &Points[i].x, &Points[i].y);

    int Cnt = 0;
    for(int i=0; i<K; i++)
        if(!isInPoly(Poly, Points[i]) || isInPoly(Poly2, Points[i])) Cnt++;
    if(Cnt == 0) printf("YES");
    else printf("%d", Cnt);
}
