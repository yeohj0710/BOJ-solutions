#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    unordered_map<string, int> m;

    string str;
    vector<string> v;

    while(cin >> str) {
        if(m[str] == 1) v.push_back(str);

        m[str]++;
    }

    sort(v.begin(), v.end());

    for(int i=0; i<v.size(); i++) cout << v[i] << "\n";
}
