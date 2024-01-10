#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    unordered_map<string, int> m;
    vector<string> v;

    while(N--) {
        string str; cin >> str;

        bool chk = false;
        int idx = -1;

        for(int i=1; i<str.length(); i++)
            if(str[i] == '/' && str[i-1] == '/') {
                chk = true;
                idx = i;
            }

        if(chk)
            str = str.substr(idx+1, str.length()-idx);

        chk = false;
        idx = -1;

        for(int i=0; i<str.length(); i++)
            if(str[i] == '/') {
                chk = true;
                idx = i;

                break;
            }

        if(chk)
            str = str.substr(0, idx);

        chk = false;
        idx = -1;

        for(int i=0; i<str.length(); i++)
            if(str[i] == '.') {
                chk = true;
                idx = i;
            }

        if(chk)
            str = str.substr(idx+1, str.length()-idx);

        v.push_back(str);
        m[str]++;
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    int mx = 0;

    for(int i=0; i<v.size(); i++)
        mx = max(mx, m[v[i]]);

    cout << mx << "\n";

    for(int i=0; i<v.size(); i++)
        if(m[v[i]] == mx) cout << v[i] << " ";
    cout << "\n";
}
