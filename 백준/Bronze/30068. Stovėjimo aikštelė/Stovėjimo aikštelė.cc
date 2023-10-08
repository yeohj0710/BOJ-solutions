#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    unordered_map<int, int> m;

    while(N--) {
        int a, b; cin >> a >> b;

        if(m[b] != 0) {
            cout << b << " " << a - m[b] << "\n";
        }
        else m[b] = a;
    }
}
