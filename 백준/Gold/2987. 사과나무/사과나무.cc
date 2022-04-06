#include <cstdio>
#include <vector>
#include <stack>
#include <algorithm>
#define N 3
using namespace std;

struct Point { int x, y; };
Point operator-(Point A, Point B) {
    Point C;
    C.x = A.x - B.x, C.y = A.y - B.y;
    return C;
}
vector<Point> Poly;

int Abs(int A) { return A>=0?A:-A; }

int Cross(Point A, Point B, Point C) {
    Point AB = B-A;
    Point AC = C-A;
    return AB.x*AC.y - AB.y*AC.x;
}

bool CompareCross(Point A, Point B) {
    int Value = Cross(Poly[0], A, B);
    if(Value) return Value > 0;
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
    Poly.resize(N);
    for(int i=0; i<N; i++) scanf("%d %d", &Poly[i].x, &Poly[i].y);
    for(int i=1; i<N; i++)
        if(Poly[i].y < Poly[0].y || (Poly[i].y == Poly[0].y && Poly[i].x < Poly[0].x))
            swap(Poly[0], Poly[i]);
    sort(Poly.begin()+1, Poly.end(), CompareCross);

    stack<Point> Convex;
    Convex.push(Poly[0]);
    Convex.push(Poly[1]);
    for(int i=2; i<N; i++) {
        while(Convex.size() >= 2) {
            Point Temp2 = Convex.top();
            Convex.pop();
            Point Temp1 = Convex.top();
            if(Cross(Temp1, Temp2, Poly[i]) > 0) {
                Convex.push(Temp2);
                break;
            }
        }
        Convex.push(Poly[i]);
    }
    vector<Point> SortedPoly;
    int Size = Convex.size();
    SortedPoly.resize(Size);
    for(int i=Size-1; i>=0; i--) {
        SortedPoly[i] = Convex.top();
        Convex.pop();
    }

    int M, Cnt = 0;
    scanf("%d", &M);
    for(int i=0; i<M; i++) {
        Point P;
        int x, y;
        scanf("%d %d", &x, &y);
        P.x = x, P.y = y;
        if(isInPoly(SortedPoly, P)) Cnt++;
    }
    printf("%.1lf\n", (double)Abs(Cross(SortedPoly[0], SortedPoly[1], SortedPoly[2]))*0.5);
    printf("%d", Cnt);
}
