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
vector<Point> Black, White;

long long Cross(Point A, Point B, Point C) {
    Point AB = B-A;
    Point AC = C-A;
    return AB.x*AC.y - AB.y*AC.x;
}

bool CrossCompBlack(Point A, Point B) {
    long long Value = Cross(Black[0], A, B);
    if(Value != 0) return Value > 0;
    else if(A.y != B.y) return A.y < B.y;
    else return A.x < B.x;
}

bool CrossCompWhite(Point A, Point B) {
    long long Value = Cross(White[0], A, B);
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
    int T, N, M;
    scanf("%d", &T);
    for(int t=0; t<T; t++) {
        scanf("%d %d", &N, &M);
        Black.resize(N), White.resize(M);
        for(int i=0; i<N; i++) scanf("%lld %lld", &Black[i].x, &Black[i].y);
        for(int i=0; i<M; i++) scanf("%lld %lld", &White[i].x, &White[i].y);

        if(N == 0 || M == 0) {
            printf("YES\n");
            continue;
        }
        else if(N <= 2 && M <= 2) {
            Point A, B, C, D;
            A = B = Black[0], C = D = White[0];
            if(N == 2) B = Black[1];
            if(M == 2) D = White[1];
            long long AB = Cross(A, B, C) * Cross(A, B, D);
            long long CD = Cross(C, D, A) * Cross(C, D, B);
            if(AB == 0 && CD == 0) {
                if(A.x > B.x || (A.x == B.x && A.y > B.y)) swap(A, B);
                if(C.x > D.x || (C.x == D.x && C.y > D.y)) swap(C, D);
                if((C.x < B.x || (C.x == B.x && C.y <= B.y))
                   && (A.x < D.x || (A.x == D.x && A.y <= D.y))) printf("NO\n");
                else printf("YES\n");
            }
            else {
                if(AB <= 0 && CD <= 0) printf("NO\n");
                else printf("YES\n");
            }
            continue;
        }

        for(int i=1; i<N; i++) {
            if(Black[i].y < Black[0].y || (Black[i].y == Black[0].y && Black[i].x < Black[0].x)) {
                long long temp = Black[0].x;
                Black[0].x = Black[i].x;
                Black[i].x = temp;
                temp = Black[0].y;
                Black[0].y = Black[i].y;
                Black[i].y = temp;
            }
        }
        sort(Black.begin()+1, Black.end(), CrossCompBlack);
        vector<Point> PolyBlack;
        PolyBlack.push_back(Black[0]);
        PolyBlack.push_back(Black[1]);
        for(int i=2; i<N; i++) {
            while(PolyBlack.size() >= 2) {
                Point temp2 = PolyBlack.back();
                PolyBlack.pop_back();
                Point temp1 = PolyBlack.back();
                if(Cross(temp1, temp2, Black[i]) > 0) {
                    PolyBlack.push_back(temp2);
                    break;
                }
            }
            PolyBlack.push_back(Black[i]);
        }

        for(int i=1; i<M; i++) {
            if(White[i].y < White[0].y || (White[i].y == White[0].y && White[i].x < White[0].x)) {
                long long temp = White[0].x;
                White[0].x = White[i].x;
                White[i].x = temp;
                temp = White[0].y;
                White[0].y = White[i].y;
                White[i].y = temp;
            }
        }
        sort(White.begin()+1, White.end(), CrossCompWhite);
        vector<Point> PolyWhite;
        PolyWhite.push_back(White[0]);
        PolyWhite.push_back(White[1]);
        for(int i=2; i<M; i++) {
            while(PolyWhite.size() >= 2) {
                Point temp2 = PolyWhite.back();
                PolyWhite.pop_back();
                Point temp1 = PolyWhite.back();
                if(Cross(temp1, temp2, White[i]) > 0) {
                    PolyWhite.push_back(temp2);
                    break;
                }
            }
            PolyWhite.push_back(White[i]);
        }

        int check = 1;
        if(N >= 3) {
            for(int i=0; i<M; i++)
                if(isInPoly(PolyBlack, White[i])) check = 0;
        }
        if(M >= 3) {
            for(int i=0; i<N; i++)
                if(isInPoly(PolyWhite, Black[i])) check = 0;
        }
        if(check) printf("YES\n");
        else printf("NO\n");
    }
}
