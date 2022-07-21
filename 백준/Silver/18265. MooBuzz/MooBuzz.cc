#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int l = 1, r = INT_MAX, ans;

    while(l <= r) {
        int m = (l + r)/2;

        int x = m - m/3 - m/5 + m/15;

        if(x == N) {
            while(m % 3 == 0 || m % 5 == 0) m--;

            cout << m << "\n";
            break;
        }

        if(x < N) l = m + 1;
        else r = m - 1;
    }
}
