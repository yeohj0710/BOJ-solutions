#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    unordered_map<int, int> m;

    while(N--) {
        int a; cin >> a;

        if(a == 1) {
            int b, c; cin >> b >> c;

            m[c] = b;
        }
        else {
            int b; cin >> b;

            cout << m[b] << "\n";
        }
    }
}
