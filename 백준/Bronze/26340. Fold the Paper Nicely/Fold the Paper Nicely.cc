#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;

    while(T--) {
        int a, b, N; cin >> a >> b >> N;

        cout << "Data set: " << a << " " << b << " " << N << "\n";

        if(a < b) swap(a, b);

        for(int i=0; i<N; i++) {
            a /= 2;

            if(a < b) swap(a, b);
        }

        cout << a << " " << b << "\n";
        cout << "\n";
    }
}
