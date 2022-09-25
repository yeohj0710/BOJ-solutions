#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N;

    while(cin >> N) {
        int cur = 1, ans = 1;

        while(true) {
            if(cur % N == 0) {
                cout << ans << "\n";
                break;
            }

            cur = (cur*10 + 1) % N;
            ans++;
        }
    }
}
