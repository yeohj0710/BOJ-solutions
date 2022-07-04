#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int l = 0, r = LLONG_MAX;
    while(l <= r) {
        int m = (l + r)/2;

        unsigned long long mm = m * m;

        if(mm >= N) r = m - 1;
        else l = m + 1;
    }

    cout << l << "\n";
}
