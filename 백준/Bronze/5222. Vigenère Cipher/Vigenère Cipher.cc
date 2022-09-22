#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string a, b; cin >> a >> b;

        string ans = "";

        for(int i=0; i<b.length(); i++)
            ans += char('A' + (b[i] - 'A' + a[i % a.length()] - 'A') % 26);

        cout << "Ciphertext: " << ans << "\n";
    }
}
