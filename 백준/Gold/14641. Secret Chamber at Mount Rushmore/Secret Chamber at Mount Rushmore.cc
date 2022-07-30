#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<vector<int>> dis(26, vector<int>(26, INT_MAX));

    while(N--) {
        char a, b; cin >> a >> b;

        dis[a - 'a'][b - 'a'] = 1;
    }

    for(int k=0; k<26; k++)
        for(int i=0; i<26; i++)
            for(int j=0; j<26; j++)
                if(dis[i][k] != INT_MAX && dis[k][j] != INT_MAX)
                    dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);

    while(M--) {
        string a, b; cin >> a >> b;

        if(a.length() != b.length()) {
            cout << "no\n";
            continue;
        }

        bool check = true;

        for(int i=0; i<a.length(); i++) {
            if(a[i] == b[i]) continue;
            if(dis[a[i] - 'a'][b[i] - 'a'] == INT_MAX) check = false;
        }

        if(check) cout << "yes\n";
        else cout << "no\n";
    }
}
