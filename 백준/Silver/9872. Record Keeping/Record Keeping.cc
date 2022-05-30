#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    map<string, int> m;
    vector<string> v;

    while(N--) {
        vector<string> str(3);
        cin >> str[0] >> str[1] >> str[2];

        sort(str.begin(), str.end());

        string temp = str[0] + str[1] + str[2];

        m[temp]++;
        v.push_back(temp);
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    int ans = 0;
    for(int i=0; i<v.size(); i++) ans = max(ans, m[v[i]]);

    cout << ans << "\n";
}
