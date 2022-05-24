#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int sum = 0, Min = 0;

    while(N--) {
        int x; cin >> x;

        sum += x;
        Min = min(Min, sum);
    }

    if(Min >= 0) cout << 0 << "\n";
    else cout << -Min << "\n";
}
