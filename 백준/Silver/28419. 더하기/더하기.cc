#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int odd = 0, even = 0;

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        if(i % 2 == 0) even += x;
        else odd += x;
    }

    if(N == 3) {
        if(even > odd) cout << -1 << "\n";
        else cout << odd - even << "\n";
    }
    else cout << abs(even - odd) << "\n";
}
