#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    if(N == 1) {
        cout << 0 << "\n";
        return 0;
    }

    int cnt[10] = {}, sum = 0;

    for(int i=9; i>=1; i--) {
        int fac = 1;

        for(int j=1; j<=i; j++) fac *= j;

        while(sum + fac <= N) {
            sum += fac;
            cnt[i]++;
        }
    }

    string ans = "";

    for(int i=1; i<=9; i++)
        for(int j=0; j<cnt[i]; j++) ans += char('0' + i);

    cout << ans << "\n";
}
