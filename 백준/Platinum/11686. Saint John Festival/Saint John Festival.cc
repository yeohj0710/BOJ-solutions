#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

struct Point { long long x, y; };
Point operator-(Point A, Point B) {
    Point C;
    C.x = A.x - B.x, C.y = A.y - B.y;
    return C;
}
vector<Point> Large;

long long Cross(Point A, Point B, Point C) {
    long long Value = A.x*(B.y-C.y) + B.x*(C.y-A.y) + C.x*(A.y-B.y);
    if(Value > 0) return 1;
    else if(Value < 0) return -1;
    else return 0;
}

bool CrossCompare(Point A, Point B) {
    long long Value = Cross(Large[0], A, B);
    if(Value != 0) return Value > 0;
    else if(A.y != B.y) return A.y < B.y;
    else return A.x < B.x;
}

bool isInPoly(vector<Point> &Poly, Point P) {
    int Size = Poly.size();
    Point Origin; Origin.x = 0, Origin.y = 0;
    Point LeftV = Poly[Size-1] - Poly[0];
    Point RightV = Poly[1] - Poly[0];
    Point PointV = P - Poly[0];
    if(Cross(Origin, LeftV, PointV) > 0) return false;
    if(Cross(Origin, RightV, PointV) < 0) return false;

    int Left = 1, Right = Size-1;
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
    int N, M;
    scanf("%d", &N);
    Large.resize(N);
    for(int i=0; i<N; i++) scanf("%lld %lld", &Large[i].x, &Large[i].y);
    for(int i=1; i<N; i++)
        if(Large[i].y < Large[0].y || (Large[i].y == Large[0].y && Large[i].x < Large[0].x))
            swap(Large[0], Large[i]);
    sort(Large.begin()+1, Large.end(), CrossCompare);

    vector<Point> Poly;
    Poly.push_back(Large[0]);
    Poly.push_back(Large[1]);
    for(int i=2; i<N; i++) {
        while(Poly.size() >= 2) {
            Point Temp2 = Poly.back();
            Poly.pop_back();
            Point Temp1 = Poly.back();
            if(Cross(Temp1, Temp2, Large[i]) > 0) {
                Poly.push_back(Temp2);
                break;
            }
        }
        Poly.push_back(Large[i]);
    }

    scanf("%d", &M);
    int Cnt = 0;
    for(int i=0; i<M; i++) {
        long long x, y;
        scanf("%lld %lld", &x, &y);
        Point P;
        P.x = x, P.y = y;
        if(isInPoly(Poly, P)) Cnt++;
    }
    printf("%d", Cnt);
}
