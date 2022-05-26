#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int ans[1001] = {};

    for(int i=1; i<=1000; i++)
        for(int j=2; j<=i; j++) {
            int temp = i;

            while(temp > 0) {
                if(temp % j == 0) {
                    ans[i]++;
                    temp /= j;
                }
                else break;
            }
        }

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        cout << ans[N] << "\n";
    }
}
