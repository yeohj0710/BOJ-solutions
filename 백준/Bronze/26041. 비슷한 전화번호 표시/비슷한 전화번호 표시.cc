#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str;
    vector<string> v;

    while(cin >> str) v.push_back(str);

    int ans = 0;

    for(int i=0; i<v.size()-1; i++) {
        if(v[i].length() <= v.back().length()) continue;

        if(v[i].substr(0, v.back().length()) == v.back()) ans++;
    }

    cout << ans << "\n";
}
