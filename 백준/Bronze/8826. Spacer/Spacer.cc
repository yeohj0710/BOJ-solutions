#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        int x = 0, y = 0;

        while(N--) {
            char ch; cin >> ch;

            if(ch == 'E') x++;
            else if(ch == 'W') x--;
            else if(ch == 'S') y--;
            else if(ch == 'N') y++;
        }

        cout << abs(x) + abs(y) << "\n";
    }
}
