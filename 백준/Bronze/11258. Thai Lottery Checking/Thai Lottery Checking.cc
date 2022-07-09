#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<pair<string, int>> v(6);
    for(int i=0; i<6; i++)
        cin >> v[i].first >> v[i].second;

    while(true) {
        string str; cin >> str;
        if(str == "-1") break;

        int ans = 0;

        if(str == v[0].first) ans += v[0].second;
        if(str.substr(0, 3) == v[1].first) ans += v[1].second;
        if(str.substr(0, 3) == v[2].first) ans += v[2].second;
        if(str.substr(3, 3) == v[3].first) ans += v[3].second;
        if(str.substr(3, 3) == v[4].first) ans += v[4].second;
        if(str.substr(4, 2) == v[5].first) ans += v[5].second;

        cout << ans << "\n";
    }
}
