#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int cnt = 0;

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        if(x == 1) cnt++;
    }

    cout << max((N + 1) / 2 - cnt, (int)0) << "\n";
}
