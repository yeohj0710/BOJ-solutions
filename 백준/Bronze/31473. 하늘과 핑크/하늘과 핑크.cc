#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int a = 0, b = 0;

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        a += x;
    }

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        b += x;
    }

    cout << b << " " << a << "\n";
}
