#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N);
    unordered_map<int, bool> m;

    for(int i=0; i<N; i++) {
        cin >> v[i];

        m[v[i]] = true;
    }

    bool chk = false;

    for(int i=0; i<N; i++)
        if(m[v[i] - 3] && m[v[i] + 3]) chk = true;

    if(chk) cout << "Yes\n";
    else cout << "No\n";
}
