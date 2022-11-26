#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int N = str.length();

    vector<vector<int>> v(N+1, vector<int>(26));

    for(int i=0; i<N; i++)
        for(int j=0; j<26; j++) {
            if(str[i] - 'a' == j) v[i+1][j] = v[i][j] + 1;
            else v[i+1][j] = v[i][j];
        }

    int M; cin >> M;

    while(M--) {
        int a, b, c, d; cin >> a >> b >> c >> d;

        vector<int> u(26);
        for(int i=0; i<26; i++) u[i] = v[b][i] - v[a-1][i];

        vector<int> w(26);
        for(int i=0; i<26; i++) w[i] = v[d][i] - v[c-1][i];

        if(u == w) cout << "DA\n";
        else cout << "NE\n";
    }
}
