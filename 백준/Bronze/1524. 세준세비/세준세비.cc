#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N, M; cin >> N >> M;

        vector<int> v(N), u(M);
        for(int i=0; i<N; i++) cin >> v[i];
        for(int i=0; i<M; i++) cin >> u[i];

        sort(v.begin(), v.end(), greater<int>());
        sort(u.begin(), u.end(), greater<int>());

        while(!v.empty() && !u.empty()) {
            if(v.back() < u.back()) v.pop_back();
            else u.pop_back();
        }

        if(u.empty()) cout << "S\n";
        else if(v.empty()) cout << "B\n";
    }
}
