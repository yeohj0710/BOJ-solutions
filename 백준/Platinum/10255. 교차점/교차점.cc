#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { int x, y; };

bool operator== (s a, s b) {
    if(a.x == b.x && a.y == b.y) return true;
    else return false;
}
bool operator>= (s a, s b) {
    if(a.x > b.x || (a.x == b.x && a.y >= b.y)) return true;
    else return false;
}
bool operator<= (s a, s b) {
    if(a.x < b.x || (a.x == b.x && a.y <= b.y)) return true;
    else return false;
}
bool operator> (s a, s b) {
    if(a.x > b.x || (a.x == b.x && a.y > b.y)) return true;
    else return false;
}
bool operator< (s a, s b) {
    if(a.x < b.x || (a.x == b.x && a.y < b.y)) return true;
    else return false;
}

int ccw(s a, s b, s c) {
    int val = a.x * (b.y - c.y) + b.x * (c.y - a.y) + c.x * (a.y - b.y);

    if(val == 0) return 0;
    else if(val > 0) return 1;
    else if(val < 0) return -1;
}

bool cross, overlap;
double cx, cy;

void coor(s a, s b, s c, s d) {
    double X = (a.x * b.y - a.y * b.x) * (c.x - d.x) - (a.x - b.x) * (c.x * d.y - c.y * d.x);
    double Y = (a.x * b.y - a.y * b.x) * (c.y - d.y) - (a.y - b.y) * (c.x * d.y - c.y * d.x);
    double div = (a.x - b.x) * (c.y - d.y) - (a.y - b.y) * (c.x - d.x);

    if(div == 0) {
        if(b == c && a <= c) cx = b.x, cy = b.y, overlap = false;
        else if(a == d && c <= a) cx = a.x, cy = a.y, overlap = false;
        else overlap = true;
    }
    else cx = X / div, cy = Y / div, overlap = false;
}

void inter(s a, s b, s c, s d) {
    int val1 = ccw(a, b, c) * ccw(a, b, d);
    int val2 = ccw(c, d, a) * ccw(c, d, b);

    if(val1 == 0 && val2 == 0) {
        if(a > b) swap(a, b);
        if(c > d) swap(c, d);

        if(a <= d && b >= c) {
            cross = true;
            coor(a, b, c, d);
        }
        else cross = false;
    }
    else {
        if(val1 <= 0 && val2 <= 0) {
            cross = true;
            coor(a, b, c, d);
        }
        else cross = false;
    }
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(9);

    int T; cin >> T;

    while(T--) {
        vector<s> v(6);

        cin >> v[0].x >> v[0].y >> v[2].x >> v[2].y;
        cin >> v[4].x >> v[4].y >> v[5].x >> v[5].y;

        v[1].x = v[2].x, v[1].y = v[0].y;
        v[3].x = v[0].x, v[3].y = v[2].y;

        int cnt = 0, ver = 0;
        bool inf = false;

        for(int i=0; i<4; i++) {
            inter(v[i], v[(i+1)%4], v[4], v[5]);

            if(cross && overlap) inf = true;
            else if(cross) {
                bool check = false;

                for(int i=0; i<4; i++)
                    if(cx == v[i].x && cy == v[i].y) check = true;

                if(check) ver++;

                cnt++;
            }
        }

        if(inf) cout << 4 << "\n";
        else {
            cnt -= ver/2;

            cout << cnt << "\n";
        }
    }
}
