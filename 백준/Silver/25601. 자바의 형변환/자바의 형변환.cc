#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int cnt = 0;
    map<string, int> m;
    vector<int> v(N+1);

    for(int i=0; i<N-1; i++) {
        string a, b; cin >> a >> b;

        if(m[a] == 0) m[a] = ++cnt;
        if(m[b] == 0) m[b] = ++cnt;

        v[m[a]] = m[b];
    }

    string a, b; cin >> a >> b;
    int x = m[a], y = m[b];

    bool check = false;
    int tx = x, ty = y;

    while(true) {
        if(tx == y) check = true;

        if(v[tx] == 0) break;

        tx = v[tx];
    }

    while(true) {
        if(ty == x) check = true;

        if(v[ty] == 0) break;

        ty = v[ty];
    }

    if(check) cout << 1 << "\n";
    else cout << 0 << "\n";
}
