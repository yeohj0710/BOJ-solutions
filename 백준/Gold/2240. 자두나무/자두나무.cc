#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, M;
vector<int> v;
vector<vector<int>> dp;

int f(int x, int y) {
    if(y > M) return INT_MIN;
    if(x >= N) return 0;

    int &ret = dp[x][y];

    if(ret != -1) return ret;

    if(v[x] == (y % 2) + 1) ret = max(f(x+1, y) + 1, f(x+1, y+1));
    else ret = max(f(x+1, y), f(x+1, y+1) + 1);

    return ret;
}

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    cin >> N >> M;

    v.resize(N);
    for(int i=0; i<N; i++) cin >> v[i];

    dp.resize(N+1, vector<int>(M+1, -1));

    cout << f(0, 0) << "\n";
}
