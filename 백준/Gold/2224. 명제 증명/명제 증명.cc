#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    cin.ignore();

    vector<vector<int>> dis(52, vector<int>(52, INT_MAX));

    while(N--) {
        string str; getline(cin, str);

        int a, b;

        if(str[0] >= 'A' && str[0] <= 'Z') a = str[0] - 'A';
        else a = str[0] - 'a' + 26;

        if(str[str.length()-1] >= 'A' && str[str.length()-1] <= 'Z') b = str[str.length()-1] - 'A';
        else b = str[str.length()-1] - 'a' + 26;

        dis[a][b] = 1;
    }

    for(int k=0; k<52; k++)
        for(int i=0; i<52; i++)
            for(int j=0; j<52; j++)
                if(dis[i][k] != INT_MAX && dis[k][j] != INT_MAX)
                    dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);

    vector<pair<int, int>> v;

    for(int i=0; i<52; i++)
        for(int j=0; j<52; j++) {
            if(i == j) continue;
            if(dis[i][j] != INT_MAX) v.push_back({i, j});
        }

    cout << v.size() << "\n";

    for(int i=0; i<v.size(); i++) {
        if(v[i].first < 26) cout << char(v[i].first + 'A');
        else cout << char(v[i].first - 26 + 'a');

        cout << " => ";

        if(v[i].second < 26) cout << char(v[i].second + 'A');
        else cout << char(v[i].second - 26 + 'a');

        cout << "\n";
    }
}
