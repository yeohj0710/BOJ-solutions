#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    cin.ignore();

    vector<vector<int>> dis(26, vector<int>(26, INT_MAX));

    while(N--) {
        string str; getline(cin, str);

        dis[str[0] - 'a'][str[str.length()-1] - 'a'] = 1;
    }

    for(int k=0; k<26; k++)
        for(int i=0; i<26; i++)
            for(int j=0; j<26; j++)
                if(dis[i][k] != INT_MAX && dis[k][j] != INT_MAX)
                    dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);

    int M; cin >> M;
    cin.ignore();

    while(M--) {
        string str; getline(cin, str);

        if(dis[str[0] - 'a'][str[str.length()-1] - 'a'] != INT_MAX) cout << "T\n";
        else cout << "F\n";
    }
}
