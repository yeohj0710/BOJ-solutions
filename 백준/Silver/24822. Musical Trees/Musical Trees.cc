#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N), u(M);
    for(int i=0; i<N; i++) cin >> v[i];
    for(int i=0; i<M; i++) cin >> u[i];

    sort(v.begin(), v.end());
    sort(u.begin(), u.end());

    vector<int> w;
    for(int i=0; i<N; i++) {
        int Min = INT_MAX, idx;
        for(int j=0; j<M; j++) {
            if(abs(v[i] - u[j]) < Min) {
                Min = abs(v[i] - u[j]);
                idx = j;
            }
        }

        w.push_back(idx);
    }

    sort(w.begin(), w.end());
    w.erase(unique(w.begin(), w.end()), w.end());

    cout << N - w.size() << "\n";
}
