#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int a = 0, b = 0;

    int tmp = 2;

    while(tmp <= N) {
        a += N / tmp;
        tmp *= 2;
    }

    tmp = 5;

    while(tmp <= N) {
        b += N / tmp;
        tmp *= 5;
    }

    a = min(a, b);
    b = min(a, b);

    int ans = 1;

    for(int i=1; i<=N; i++) {
        tmp = i;

        while(tmp % 2 == 0 && a > 0) {
            tmp /= 2;
            a--;
        }

        while(tmp % 5 == 0 && b > 0) {
            tmp /= 5;
            b--;
        }

        ans = (ans * tmp) % 10;
    }

    cout << ans << "\n";
}
