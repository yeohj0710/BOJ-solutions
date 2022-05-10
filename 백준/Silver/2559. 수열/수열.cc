#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, K; cin >> N >> K;

    vector<int> sum(N+1);

    for(int i=1; i<=N; i++) {
        int x; cin >> x;

        sum[i] = sum[i-1] + x;
    }

    int Max = INT_MIN;
    for(int i=0; i<N-K+1; i++)
        Max = max(Max, sum[i+K] - sum[i]);

    cout << Max << "\n";
}
