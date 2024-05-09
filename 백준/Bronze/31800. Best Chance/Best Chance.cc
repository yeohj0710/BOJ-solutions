#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N);

    for(int i=0; i<N; i++) cin >> v[i];

    int mx = 0, a = 0;

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        if(v[i] > mx) {
            mx = v[i];
            a = i;
        }
    }

    mx = 0;

    int b = 0;

    for(int i=0; i<N; i++) {
        if(v[i] > mx && i != a) {
            mx = v[i];
            b = i;
        }
    }

    for(int i=0; i<N; i++) {
        if(i != a) cout << v[i] - v[a] << " ";
        else cout << v[i] - v[b] << " ";
    }
    cout << "\n";
}
