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

    int N; cin >> N;

    vector<s> v(N), u(N);
    for(int i=0; i<N; i++) cin >> v[i].x >> v[i].y;
    for(int i=0; i<N; i++) cin >> u[i].x >> u[i].y;

    vector<int> w(N);
    for(int i=0; i<N; i++) w[i] = i;

    while(true) {
        bool check = true;

        for(int i=0; i<N; i++)
            for(int j=i+1; j<N; j++) {
                inter(v[i], u[w[i]], v[j], u[w[j]]);

                if(cross) check = false;
            }

        if(check) {
            for(int i=0; i<N; i++) cout << w[i] + 1 << "\n";

            break;
        }

        if(!next_permutation(w.begin(), w.end())) break;
    }
}
