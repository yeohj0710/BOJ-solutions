#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a, b; cin >> a >> b;

    int ans = 0, j = b.length() - 1;
    for(int i=a.length()-1; i>=0; i--) {
        if(a[i] != b[j]) ans++;
        else j--;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if(a == b) cout << ans << "\n";
    else cout << -1 << "\n";
}
