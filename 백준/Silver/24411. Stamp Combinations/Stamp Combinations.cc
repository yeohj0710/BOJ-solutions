#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) {
        int x; cin >> x;

        v[i] = v[i-1] + x;
    }

    unordered_map<int, bool> m;
    for(int i=0; i<=N; i++) m[v[i]] = true;

    while(M--) {
        int x; cin >> x;

        bool check = false;

        for(int i=0; i<=N; i++) {
            if(x - (v[N] - v[i]) > v[i]) continue;

            if(m[x - (v[N] - v[i])]) {
                check = true;
                break;
            }
        }

        if(check) cout << "Yes\n";
        else cout << "No\n";
    }
}
