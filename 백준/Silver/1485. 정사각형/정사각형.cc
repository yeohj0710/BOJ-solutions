#include <bits/stdc++.h>
using namespace std;

struct Point { long long x, y; } Points;

bool compare(Point a, Point b) {
    if(a.y < b.y) return true;
    else if(a.y == b.y && a.x < b.x) return true;
    else return false;
}

long long disCheck(Point a, Point b, Point c, Point d) {
    return (a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y)
            == (c.x - d.x)*(c.x - d.x) + (c.y - d.y)*(c.y - d.y);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        Point point[4];
        for(int i=0; i<4; i++) cin >> point[i].x >> point[i].y;
        sort(point, point+4, compare);

        if(disCheck(point[0], point[1], point[0], point[2])
           && disCheck(point[0], point[1], point[1], point[3])
           && disCheck(point[0], point[1], point[2], point[3])
           && disCheck(point[0], point[3], point[1], point[2])) cout << "1\n";
        else cout << "0\n";
    }
}
