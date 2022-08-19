#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int M, N; cin >> M >> N;

    vector<int> v(N), u(N);
    for(int i=0; i<N; i++) {
        cin >> v[i];
        u[i] = v[i];
    }

    vector<char> vv(N);
    for(int i=0; i<N; i++) cin >> vv[i];

    sort(u.begin(), u.end());
    u.erase(unique(u.begin(), u.end()), u.end());

    vector<int> w(N);
    for(int i=0; i<v.size(); i++)
        w[i] = lower_bound(u.begin(), u.end(), v[i]) - u.begin();

    map<vector<int>, bool> m;
    vector<int> uu(N);
    m[uu] = true;

    bool check = true;

    for(int i=0; i<N; i++) {
        if(vv[i] == '+') uu[w[i]]++;
        else if(vv[i] == '-') uu[w[i]]--;

        if(m[uu]) check = false;

        m[uu] = true;
    }

    if(check) cout << 1 << "\n";
    else cout << 0 << "\n";
}
