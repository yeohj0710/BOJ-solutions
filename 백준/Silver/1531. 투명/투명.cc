#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<int>> v(101, vector<int>(101));

    while(N--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        for(int i=x1; i<=x2; i++)
            for(int j=y1; j<=y2; j++) v[i][j]++;
    }

    int ans = 0;
    for(int i=0; i<=100; i++)
        for(int j=0; j<=100; j++)
            if(v[i][j] > M) ans++;

    cout << ans << "\n";
}
