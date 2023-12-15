#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    unordered_map<string, int> m, mm;
    vector<string> v;

    while(true) {
        string str; cin >> str;

        if(str == "------") break;

        int a = stoll(str), b; string s; cin >> b >> s;

        v.push_back(s);

        m[s] += b - a;
    }

    while(true) {
        string str; cin >> str;

        if(str == "======") break;

        int a = stoll(str), b; string s; cin >> b >> s;

        v.push_back(s);

        mm[s] += b - a;
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    bool chk = false;

    for(int i=0; i<v.size(); i++) {
        int dif = mm[v[i]] - m[v[i]];

        if(dif == 0) continue;

        chk = true;

        cout << v[i] << " ";

        if(dif > 0) cout << "+" << dif << "\n";
        else cout << dif << "\n";
    }

    if(!chk) cout << "No differences found.\n";
}
