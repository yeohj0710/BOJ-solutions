#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<string> v;
    unordered_map<string, int> m;

    while(N--) {
        string str; int x; cin >> str >> x;

        if(m[str] == 0) v.push_back(str);

        m[str] += x;
    }

    bool check = false;

    for(int i=0; i<v.size(); i++)
        if(m[v[i]] == 5) check = true;

    if(check) cout << "YES\n";
    else cout << "NO\n";
}
