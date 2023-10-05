#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    unordered_map<string, int> m;
    unordered_map<string, string> mm;
    vector<string> v;

    while(N--) {
        string a, b; int x; cin >> a >> x >> b;

        if(mm[b] == "") v.push_back(b);

        if(x >= m[b]) {
            m[b] = x;
            mm[b] = a;
        }
    }

    vector<string> u;

    for(int i=0; i<v.size(); i++)
        u.push_back(mm[v[i]]);

    sort(u.begin(), u.end());

    cout << u.size() << "\n";

    for(int i=0; i<u.size(); i++) cout << u[i] << "\n";
}
