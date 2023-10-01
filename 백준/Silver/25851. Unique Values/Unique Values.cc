#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    set<int> s;
    int j = 0, ans = 0;

    for(int i=0; i<N; i++) {
        while(j < N && s.find(v[j]) == s.end()) {
            s.insert(v[j]);
            j++;
        }

        ans += j - i;
        s.erase(v[i]);
    }

    cout << ans << "\n";
}
