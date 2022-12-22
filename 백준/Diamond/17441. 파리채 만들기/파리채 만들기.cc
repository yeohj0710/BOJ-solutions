#include <cstdio>
#include <vector>
using namespace std;

struct Point { double x, y; };
vector<Point> Points;

double Cross(Point A, Point B, Point C) {
    return A.x*(B.y-C.y) + B.x*(C.y-A.y) + C.x*(A.y-B.y);
}

int main() {
    int N;
    double Area = 0, Val1 = 0, Val2 = 0, Val3 = 0, Ans;
    scanf("%d", &N);
    Points.resize(N);
    for(int i=0; i<N; i++) scanf("%lf %lf", &Points[i].x, &Points[i].y);
    for(int i=0; i<N-1; i++) Area += Cross(Points[0], Points[i], Points[i+1])/2;
    for(int i=0; i<N; i++) {
        double xi = Points[i].x, xi1 = Points[(i+1)%N].x;
        double yi = Points[i].y, yi1 = Points[(i+1)%N].y;
        Val1 += ((yi1-yi)*(xi*xi*xi + xi*xi*xi1 + xi*xi1*xi1 + xi1*xi1*xi1)
                 -(xi1-xi)*(yi*yi*yi + yi*yi*yi1 + yi*yi1*yi1 + yi1*yi1*yi1))/12;
        Val2 += (yi1-yi)*(xi*xi + xi*xi1 + xi1*xi1)/6;
        Val3 += (xi1-xi)*(yi*yi + yi*yi1 + yi1*yi1)/6;
    }
    Ans = 2/(Area*Area) * (Area*Val1 - Val2*Val2 - Val3*Val3);
    printf("%.10lf", Ans);
}
