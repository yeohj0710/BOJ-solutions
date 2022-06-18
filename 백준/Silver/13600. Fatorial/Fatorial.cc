#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int fac[10] = {1, 1};
    for(int i=2; i<=9; i++) fac[i] = fac[i-1] * i;

    int sum = 0, ans = 0;
    for(int i=9; i>=1; i--) {
        while(true) {
            if(sum + fac[i] <= N) {
                sum += fac[i];
                ans++;
            }
            else break;
        }
    }

    cout << ans << "\n";
}
