#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    map<string, string> m;
    map<string, vector<string>> m2;

    while(N--) {
        string a; cin >> a;

        int K; cin >> K;

        while(K--) {
            string b; cin >> b;

            m[b] = a;
            m2[a].push_back(b);
        }

        sort(m2[a].begin(), m2[a].end());
    }

    while(M--) {
        string str; cin >> str;
        int x; cin >> x;

        if(x == 0) {
            for(int i=0; i<m2[str].size(); i++) cout << m2[str][i] << "\n";
        }
        else if(x == 1) {
            cout << m[str] << "\n";
        }
    }
}
