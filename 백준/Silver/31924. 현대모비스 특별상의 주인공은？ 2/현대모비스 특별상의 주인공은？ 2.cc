#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    vector<string> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
    int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

    string s = "MOBIS";

    int ans = 0;

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            for(int k=0; k<8; k++) {
                bool chk = true;

                for(int l=0; l<5; l++) {
                    int nx = i + dx[k] * l;
                    int ny = j + dy[k] * l;

                    if(nx < 0 || ny < 0 || nx >= n || ny >= n) {
                        chk = false;
                        break;
                    }

                    if(v[nx][ny] != s[l]) {
                        chk = false;
                        break;
                    }
                }

                if(chk) ans++;
            }

    cout << ans << "\n";
}
