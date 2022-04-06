#include <bits/stdc++.h>
using namespace std;

int comb[1005][1005] = {1, 0};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, K; cin >> N >> K;
    for(int i=1; i<=N; i++)
        for(int j=0; j<=i; j++)
            comb[i][j] = (comb[i-1][j-1] + comb[i-1][j]) % 10007;
    cout << comb[N][K];
}
