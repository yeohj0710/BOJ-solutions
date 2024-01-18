#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    unordered_map<string, bool> m;
    vector<string> v;

    while(N--) {
        string a, b; cin >> a >> b;

        if(b == "enter") m[a] = true;
        else m[a] = false;

        v.push_back(a);
    }

    v.erase(unique(v.begin(), v.end()), v.end());

    vector<string> u;

    for(int i=0; i<v.size(); i++)
        if(m[v[i]]) u.push_back(v[i]);

    sort(u.begin(), u.end(), greater<string>());
    u.erase(unique(u.begin(), u.end()), u.end());

    for(int i=0; i<u.size(); i++) cout << u[i] << "\n";
}
