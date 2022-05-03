#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N, r1, c1, r2, c2;
        cin >> N >> r1 >> c1 >> r2 >> c2;

        int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
        int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};

        bool check = false;
        for(int i=0; i<8; i++) {
            int nx = r1 + dx[i];
            int ny = c1 + dy[i];

            if(nx == r2 && ny == c2) check = true;
        }

        cout << "Case " << t << ": ";
        if(check) cout << "YES\n";
        else cout << "NO\n";
    }
}
