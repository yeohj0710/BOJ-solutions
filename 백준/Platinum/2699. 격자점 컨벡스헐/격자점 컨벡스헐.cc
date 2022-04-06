#include <cstdio>
#include <vector>
#include <stack>
#include <algorithm>
#define INF 10000
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

int main() {
    int T, N;
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        int cnt = 0, xMin = INF, yMax = -INF, first;
        stack<Coor> Convex;
        vector<Coor> Ans;
        scanf("%d", &N);
        Point.resize(N), Ans.resize(N);
        for(int j=0; j<N; j++) scanf("%lld %lld", &Point[j].x, &Point[j].y);
        for(int j=1; j<N; j++) {
            if(Point[j].y < Point[0].y || (Point[j].y == Point[0].y && Point[j].x < Point[0].x)) {
                long long temp = Point[0].x;
                Point[0].x = Point[j].x;
                Point[j].x = temp;
                temp = Point[0].y;
                Point[0].y = Point[j].y;
                Point[j].y = temp;
            }
        }
        sort(Point.begin()+1, Point.end(), minCCW);
        Convex.push(Point[0]);
        Convex.push(Point[1]);
        for(int j=2; j<N; j++) {
            while(Convex.size() >= 2) {
                Coor temp2 = Convex.top();
                Convex.pop();
                Coor temp1 = Convex.top();
                if(CCW(temp1, temp2, Point[j]) > 0) {
                    Convex.push(temp2);
                    break;
                }
            }
            Convex.push(Point[j]);
        }
        printf("%d\n", Convex.size());
        while(!Convex.empty()) {
            Coor Pop = Convex.top();
            Convex.pop();
            if(Pop.y > yMax || (Pop.y == yMax && Pop.x < xMin)) {
                yMax = Pop.y;
                xMin = Pop.x;
                first = cnt;
            }
            Ans[cnt].x = Pop.x, Ans[cnt++].y = Pop.y;
        }
        for(int i=first; i<cnt; i++) printf("%d %d\n", Ans[i].x, Ans[i].y);
        for(int i=0; i<first; i++) printf("%d %d\n", Ans[i].x, Ans[i].y);
    }
}
