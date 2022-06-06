#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(11, -1);

    int ans = 0;
    while(N--) {
        int a, b; cin >> a >> b;

        if(v[a] == -1) v[a] = b;
        else {
            if(v[a] != b) {
                v[a] = b;
                ans++;
            }
        }
    }

    cout << ans << "\n";
}
