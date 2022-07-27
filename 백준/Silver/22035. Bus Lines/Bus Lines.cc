#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    map<int, bool> m;
    int cnt = 0;

    vector<pair<int, int>> v;

    for(int i=2; i<=N; i++) {
        if(cnt == M) {
            cout << -1 << "\n";

            return 0;
        }

        v.push_back({i-1, i});

        m[(i-1) + i] = true;
        cnt++;
    }

    if(cnt == M) {
        for(int j=0; j<v.size(); j++)
            cout << v[j].first << " " << v[j].second << "\n";

        return 0;
    }

    for(int i=1; i<=N; i++)
        for(int j=1; j<=N; j++) {
            if(i == j) continue;
            if(m[i+j]) continue;

            v.push_back({i, j});

            m[i + j] = true;
            cnt++;

            if(cnt == M) {
                for(int j=0; j<v.size(); j++)
                    cout << v[j].first << " " << v[j].second << "\n";

                return 0;
            }
        }

    cout << -1 << "\n";
}
