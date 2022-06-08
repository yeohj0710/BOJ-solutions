#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v(1000002);

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int ans = 0;

    while(N--) {
        int x; cin >> x;

        if(v[x+1] > 0) {
            v[x+1]--;
            v[x]++;
        }
        else {
            v[x]++;
            ans++;
        }
    }

    cout << ans << "\n";
}
