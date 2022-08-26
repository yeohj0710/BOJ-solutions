#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<bool>> v(2001, vector<bool>(2001));
    int ans = 0;

    for(int i=N; i<=M; i++)
        for(int j=1; j<=i; j++) {
            int a = i / __gcd(i, j);
            int b = j / __gcd(i, j);

            if(!v[a][b]) ans++;

            v[a][b] = true;
        }

    cout << ans << "\n";
}
