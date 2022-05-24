#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, a, b; cin >> N >> a >> b;

        if(a > b) cout << a - b << " ";
        else cout << 0 << " ";

        if(a + b <= N) cout << a << "\n";
        else cout << a - (a + b - N) << "\n";
    }
}
