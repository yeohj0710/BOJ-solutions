#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int N, M; cin >> N >> M;

    int cnt = 0;

    while(true) {
        if(N >= 1 && N % 2 == 1 && M >= 1 && M % 2 == 1) cnt++;
        else break;

        N = (N - 1) / 2;
        M = (M - 1) / 2;
    }

    int ans = 0;
    for(int i=0; i<cnt; i++) ans += pow(4, i);

    cout << ans << "\n";
}
