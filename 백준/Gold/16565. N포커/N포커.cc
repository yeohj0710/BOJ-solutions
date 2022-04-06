#include <bits/stdc++.h>
#define MOD 10007
using namespace std;

int comb[53][53] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int i=0; i<=52; i++) comb[i][0] = 1;
    for(int i=1; i<=52; i++)
        for(int j=1; j<=52; j++)
            comb[i][j] = (comb[i-1][j] + comb[i-1][j-1]) % MOD;

    int N, ans = 0; cin >> N;
    for(int i=1; i<=13 && N-4*i>=0; i++) {
        if(i%2 == 1) ans = (ans + comb[52-4*i][N-4*i]*comb[13][i]) % MOD;
        else ans = (ans - (comb[52-4*i][N-4*i]*comb[13][i]) % MOD + MOD) % MOD;
    }
    cout << ans;
}
