#include <bits/stdc++.h>
#define int long long
using namespace std;

map<string, int> m;

bool cmp(pair<string, string> a, pair<string, string> b) {
    return m[a.first] > m[b.first];
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    cin.ignore();

    vector<pair<string, string>> v(N);
    for(int i=0; i<N; i++) {
        getline(cin, v[i].first);
        getline(cin, v[i].second);
    }

    int M; cin >> M;
    cin.ignore();

    while(M--) {
        string str; getline(cin, str);
        m[str]++;
    }

    sort(v.begin(), v.end(), cmp);

    if(m[v[0].first] > m[v[1].first]) cout << v[0].second << "\n";
    else cout << "tie\n";
}
