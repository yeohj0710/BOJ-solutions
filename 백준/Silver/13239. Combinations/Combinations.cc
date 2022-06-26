#include <bits/stdc++.h>
using namespace std;

int comb[1005][1005] = {1, 0};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int i=1; i<=1000; i++)
        for(int j=0; j<=i; j++)
            comb[i][j] = (comb[i-1][j-1] + comb[i-1][j]) % (int)(1e9 + 7);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;

        cout << comb[N][M] << "\n";
    }
}
