#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<int> v(N), u(N);

        for(int i=0; i<N; i++) cin >> v[i];
        for(int i=0; i<N; i++) cin >> u[i];

        int i = N-1, j = N-1;

        while(i >= 0 && j >= 0) {
            if(v[i] == u[j]) i--, j--;
            else i--;
        }

        cout << j + 1 << "\n";
    }
}
