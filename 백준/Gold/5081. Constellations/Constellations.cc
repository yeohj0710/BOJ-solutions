#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v;

int f(int x) {
    if(x == v[x]) return x;
    else return v[x] = f(v[x]);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int t=1; ; t++) {
        int N; cin >> N;
        if(N == 0) break;

        v.clear();
        v.resize(N+1);
        for(int i=1; i<=N; i++) v[i] = i;

        vector<pair<int, int>> u(N+1);
        for(int i=1; i<=N; i++) cin >> u[i].first >> u[i].second;

        for(int i=1; i<=N; i++) {
            int Min = INT_MAX, idx;

            for(int j=1; j<=N; j++) {
                if(i == j) continue;

                Min = min(Min, (int)(pow(u[i].first - u[j].first, 2) + pow(u[i].second - u[j].second, 2)));
            }

            for(int j=1; j<=N; j++) {
                if(i == j) continue;

                if(pow(u[i].first - u[j].first, 2) + pow(u[i].second - u[j].second, 2) == Min) {
                    if(f(i) != f(j)) v[f(i)] = f(j);
                }
            }
        }

        vector<int> w;
        for(int i=1; i<=N; i++) w.push_back(f(i));

        sort(w.begin(), w.end());
        w.erase(unique(w.begin(), w.end()), w.end());

        cout << "Sky " << t << " contains " << w.size() << " constellations.\n";
    }
}
