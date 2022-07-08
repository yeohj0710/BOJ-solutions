#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int> v(5);
    for(int i=0; i<5; i++) {
        cin >> v[i];

        v[i] = max(v[i], (int)40);
    }

    int ans = 0;
    for(int i=0; i<5; i++) ans += v[i];

    ans /= 5;

    cout << ans << "\n";
}
