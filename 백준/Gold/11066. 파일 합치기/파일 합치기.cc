#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<int> sum(N+1);
        for(int i=1; i<=N; i++) {
            int value; cin >> value;
            sum[i] = sum[i-1] + value;
        }

        vector<vector<int>> cost(N+1, vector<int>(N+1));
        for(int j=1; j<=N; j++)
            for(int i=1; i<=N-j; i++) {
                cost[i][i+j] = INT_MAX;
                for(int k=i; k<i+j; k++)
                    cost[i][i+j] = min(cost[i][i+j], cost[i][k] + cost[k+1][i+j]);
                cost[i][i+j] += sum[i+j] - sum[i-1];
            }

        cout << cost[1][N] << "\n";
    }
}
