#include <bits/stdc++.h>
#define int long long
using namespace std;

int v[1001][1001] = {};

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    for(int i=1; i<=N; i++) {
        int x, y, a, b; cin >> x >> y >> a >> b;

        for(int j=x; j<x+a; j++)
            for(int k=y; k<y+b; k++) v[j][k] = i;
    }

    vector<int> ans(N+1);
    for(int i=0; i<=1000; i++)
        for(int j=0; j<=1000; j++)
            if(v[i][j] != 0) ans[v[i][j]]++;

    for(int i=1; i<=N; i++) cout << ans[i] << "\n";
}
