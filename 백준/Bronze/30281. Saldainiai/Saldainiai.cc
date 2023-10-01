#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v;
    int ans = 0;

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        if(x % 2 == 0) ans += x;
        else v.push_back(x);
    }

    sort(v.begin(), v.end(), greater<int>());

    for(int i=1; i<v.size(); i+=2) ans += v[i-1] + v[i];

    ans /= 2;

    cout << ans << "\n";
}
