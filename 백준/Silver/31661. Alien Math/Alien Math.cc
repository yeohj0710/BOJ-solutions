#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<string> v(N);

    for(int i=0; i<N; i++) cin >> v[i];

    string s; cin >> s;

    int ans = 0, i = 0;

    while(i < s.length()) {
        for(int j=0; j<N; j++) {
            if(i + v[j].length() - 1 >= s.length()) continue;
            if(s.substr(i, v[j].length()) == v[j]) {
                ans = ans * N + j;
                i += v[j].length();
            }
        }
    }

    cout << ans << "\n";
}
