#include <bits/stdc++.h>
#define MAX 2000
using namespace std;

int arr[MAX], dp[MAX][MAX];

int solve(int i, int j) {
    if(dp[i][j] != -1) return dp[i][j];
    if(i == j) return 1;
    if(i+1 == j) return dp[i][j] = (arr[i] == arr[j]);
    if(arr[i] == arr[j] && solve(i+1, j-1) == 1) return dp[i][j] = 1;
    return dp[i][j] = 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    for(int i=0; i<N; i++) cin >> arr[i];

    fill(&dp[0][0], &dp[MAX-1][MAX], -1);

    int M; cin >> M;
    while(M--) {
        int S, E; cin >> S >> E;
        cout << solve(S-1, E-1) << "\n";
    }
}
