#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    if(N == 1 && v[0] == 0) {
        cout << "YES\n";
        cout << 0 << "\n";

        return 0;
    }

    cout << "YES\n";

    if(N == 1)
        cout << v[0] << v[0] << v[0] << v[0] << "\n";
    else
        cout << v[1] << v[0] << v[1] << v[0] << "\n";
}
