#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<int, int>> v(N);

    for(int i=0; i<N; i++)
        cin >> v[i].first >> v[i].second;

    map<pair<int, int>, bool> m;

    for(int i=0; i<N; i++)
        m[{v[i].first - v[0].first, v[i].second - v[0].second}] = true;

    int M; cin >> M;

    vector<pair<int, int>> u(M);

    for(int i=0; i<M; i++)
        cin >> u[i].first >> u[i].second;

    for(int i=0; i<M; i++) {
        int cnt = 0;

        for(int j=0; j<M; j++) {
            if(m[{u[j].first - u[i].first, u[j].second - u[i].second}]) cnt++;
        }

        if(cnt >= N) {
            cout << u[i].first - v[0].first << " " << u[i].second - v[0].second << "\n";

            break;
        }
    }
}
