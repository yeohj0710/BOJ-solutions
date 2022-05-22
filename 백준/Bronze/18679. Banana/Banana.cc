#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<pair<string, string>> v;

    int N; cin >> N;

    for(int i=0; i<N; i++) {
        string a, b, c; cin >> a >> b >> c;

        v.push_back({a, c});
    }

    int T; cin >> T;

    while(T--) {
        int M; cin >> M;

        for(int i=0; i<M; i++) {
            string str; cin >> str;

            for(int j=0; j<v.size(); j++)
                if(str == v[j].first) cout << v[j].second << " ";
        }

        cout << "\n";
    }
}
