#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v;

int f(int x) {
    if(v[x] == x) return x;
    else return v[x] = f(v[x]);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        v.clear();
        v.resize(N+1);
        for(int i=1; i<=N; i++) v[i] = i;

        for(int i=1; i<=N; i++)
            for(int j=1; j<=N; j++) {
                int x; cin >> x;

                if(i >= j || x == 0) continue;

                if(f(i) == f(j)) continue;

                v[f(i)] = f(j);
            }

        vector<int> u;
        for(int i=1; i<=N; i++) u.push_back(f(i));

        sort(u.begin(), u.end());
        u.erase(unique(u.begin(), u.end()), u.end());

        int ans = N - u.size();

        cout << ans << "\n";
    }
}
