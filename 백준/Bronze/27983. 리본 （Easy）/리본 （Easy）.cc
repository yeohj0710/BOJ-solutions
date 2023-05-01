#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N), u(N);
    vector<char> w(N);

    for(int i=0; i<N; i++) cin >> v[i];
    for(int i=0; i<N; i++) cin >> u[i];
    for(int i=0; i<N; i++) cin >> w[i];

    for(int i=0; i<N; i++)
        for(int j=i+1; j<N; j++)
            if(abs(v[i] - v[j]) <= u[i] + u[j] && w[i] != w[j]) {
                cout << "YES\n";
                cout << i+1 << " " << j+1 << "\n";
                return 0;
            }

    cout << "NO\n";
}
