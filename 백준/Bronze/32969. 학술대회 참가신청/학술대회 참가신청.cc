#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string s; getline(cin, s);

    vector<string> v = {"social", "history", "language", "literacy", "bigdata", "public", "society"};

    int idx = -1;

    for(int i=0; i<s.length(); i++) {
        for(int j=0; j<v.size(); j++) {
            if(i + v[j].length() > s.length()) continue;

            if(s.substr(i, v[j].length()) == v[j]) idx = j;
        }
    }

    if(idx <= 3) cout << "digital humanities\n";
    else cout << "public bigdata\n";
}
