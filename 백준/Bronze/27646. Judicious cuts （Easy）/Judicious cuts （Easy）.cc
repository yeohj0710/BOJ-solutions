#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        cout << N-1 << "\n";

        for(int i=0; i<N-1; i++)
            cout << 0 << " " << i << "\n";
    }
}
