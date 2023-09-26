#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int idx = 0, mn = INT_MAX;

    int N; cin >> N;

    for(int i=1; i<=N; i++) {
        int a, b; cin >> a >> b;

        int val = (a / (b + 1)) * 2;

        if(a % (b + 1) != 0) val += 2;

        if(val < mn) {
            mn = val;
            idx = i;
        }
    }

    cout << idx << " " << mn << "\n";
}
