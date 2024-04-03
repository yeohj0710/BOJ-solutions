#include <bits/stdc++.h>
#define int long long
using namespace std;

unordered_map<string, int> mm;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    map<vector<string>, bool> m;
    vector<string> v;

    for(int i=0; i<N; i++) {
        string a, b, c; cin >> a >> b >> c;

        if(mm[c] == 0) v.push_back(c);

        if(!m[{a, b, c}]) {
            m[{a, b, c}] = true;

            mm[c]++;
        }
    }

    sort(v.begin(), v.end());

    for(int i=0; i<v.size(); i++) cout << v[i] << " " << mm[v[i]] << "\n";
}
