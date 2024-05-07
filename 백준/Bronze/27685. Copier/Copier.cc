#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<int> v;
        unordered_map<int, bool> m;

        while(N--) {
            int x; cin >> x;

            if(!m[x]) v.push_back(x);

            m[x] = true;
        }

        for(int i=0; i<v.size(); i++) cout << v[i] << " ";
        cout << "\n";
    }
}
