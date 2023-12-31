#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int a = -1, b = 1, c = 1;

    for(int i=0; i<N-1; i++) {
        int aa = a - c, bb = b + c, cc = a * 2 - b * 2 + c;

        a = aa, b = bb, c = cc;
    }

    cout << a + b + c << "\n";
}
