#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    int N; cin >> N;

    unordered_map<string, int> m;
    vector<string> v;

    while(N--) {
        string str; int x; cin >> str >> x;

        if(!m[str]) v.push_back(str);

        m[str] += x;
    }

    bool check = false;

    for(int i=0; i<v.size(); i++)
        for(int j=0; j<v.size(); j++) {
            if(i == j) continue;

            if((int)(m[v[i]] * 1.618) == m[v[j]]) check = true;
        }

    if(check) cout << "Delicious!\n";
    else cout << "Not Delicious...\n";
}
