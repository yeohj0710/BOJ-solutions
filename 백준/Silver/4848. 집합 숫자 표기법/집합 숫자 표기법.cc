#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    vector<string> v(16);
    unordered_map<string, int> m;

    v[0] = "{}";
    m[v[0]] = 0;

    for(int i=1; i<=15; i++) {
        string str = "{";

        for(int j=0; j<i; j++) {
            str += v[j];

            if(j != i-1) str += ",";
        }

        str += "}";

        v[i] = str;
        m[str] = i;
    }

    int T; cin >> T;

    while(T--) {
        string a, b; cin >> a >> b;

        cout << v[m[a] + m[b]] << "\n";
    }
}
