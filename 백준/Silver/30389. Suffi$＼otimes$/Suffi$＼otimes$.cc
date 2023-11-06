#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    unordered_map<string, int> m;

    vector<string> v;

    for(int i=0; i<N; i++) {
        string str; cin >> str;

        for(int j=0; j<str.length(); j++) {
            string tmp = str.substr(j, str.length() - j);

            v.push_back(tmp);
            m[tmp]++;
        }
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    int ans = 0;

    for(int i=0; i<v.size(); i++)
        if(m[v[i]] % 2 == 1) ans++;

    cout << ans << "\n";
}
