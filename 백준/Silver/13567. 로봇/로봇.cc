#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    int x = 0, y = 0, dir = 0;
    bool check = true;

    while(M--) {
        string str; cin >> str;
        int d; cin >> d;

        if(str == "MOVE") {
            if(dir == 0) y += d;
            else if(dir == 1) x += d;
            else if(dir == 2) y -= d;
            else if(dir == 3) x -= d;

            if(-x < 0 || y < 0 || -x > N || y > N) check = false;
        }
        else if(str == "TURN") {
            if(d == 0) dir = (dir - 1 + 4) % 4;
            else if(d == 1) dir = (dir + 1) % 4;
        }
    }

    if(check) cout << y << " " << -x << "\n";
    else cout << -1 << "\n";
}
