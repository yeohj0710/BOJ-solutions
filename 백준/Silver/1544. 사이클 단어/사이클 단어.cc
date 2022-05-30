#include <bits/stdc++.h>
#define int long long
using namespace std;

map<string, int> m;

bool cmp(string a, string b) {
    if(m[a] != m[b]) return m[a] > m[b];
    else return a > b;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    map<string, bool> m;
    int ans = 0;

    while(N--) {
        string str; cin >> str;

        vector<string> v;

        for(int i=0; i<str.length(); i++) {
            string temp = str.substr(i, str.length()-i) + str.substr(0, i);

            v.push_back(temp);
        }

        sort(v.begin(), v.end());

        if(!m[v[0]]) ans++;

        m[v[0]] = true;
    }

    cout << ans << "\n";
}
