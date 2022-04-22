#include <bits/stdc++.h>
using namespace std;

const int MAX = 1001;
const int INF = 100000000;

int N;
int arr[MAX], dp[MAX];

int f(int x) {
    if(x >= N-1) return 0;
    if(dp[x] != -1) return dp[x];

    dp[x] = INF;
    for(int i=1; i<=arr[x]; i++)
        dp[x] = min(dp[x], f(x+i) + 1);

    return dp[x];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    for(int i=0; i<N; i++) cin >> arr[i];

    memset(dp, -1, sizeof(dp));

    int ans = f(0);

    if(ans != INF) cout << ans << "\n";
    else cout << "-1\n";
}
