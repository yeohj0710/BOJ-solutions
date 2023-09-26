#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; string str; cin >> N >> str >> M;

    vector<string> v(M);

    for(int i=0; i<M; i++) cin >> v[i];

    unordered_map<char, unordered_map<char, int>> m;

    m['R']['R'] = m['S']['S'] = m['P']['P'] = 1;
    m['R']['S'] = m['S']['P'] = m['P']['R'] = 2;
    m['R']['P'] = m['S']['R'] = m['P']['S'] = 0;

    int score = 0, mx = 0;

    for(int i=0; i<N; i++) {
        int a = 0, b = 0, c = 0;

        for(int j=0; j<M; j++) {
            score += m[str[i]][v[j][i]];
            a += m['R'][v[j][i]];
            b += m['P'][v[j][i]];
            c += m['S'][v[j][i]];
        }

        mx += max({a, b, c});
    }

    cout << score << "\n";
    cout << mx << "\n";
}

