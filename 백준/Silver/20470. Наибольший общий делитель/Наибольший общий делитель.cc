#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(N);
    bool chk = false;

    for(int i=0; i<N; i++) {
        cin >> v[i];

        if(v[i] == M) chk = true;
    }

    if(chk) {
        cout << 1 << "\n";
        cout << M << "\n";
        return 0;
    }

    for(int i=0; i<N; i++)
        for(int j=i+1; j<N; j++)
            if(__gcd(v[i], v[j]) == M) {
                cout << 2 << "\n";
                cout << v[i] << " " << v[j] << "\n";
                return 0;
            }

    cout << -1 << "\n";
}
