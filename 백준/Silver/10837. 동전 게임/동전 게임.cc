#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, T; cin >> N >> T;

    while(T--) {
        int a, b; cin >> a >> b;

        if(a == b) cout << 1 << "\n";
        else if(a > b) {
            if(N - a >= a - b - 2) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
        else if(a < b) {
            if(N - b >= b - a - 1) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
    }
}
