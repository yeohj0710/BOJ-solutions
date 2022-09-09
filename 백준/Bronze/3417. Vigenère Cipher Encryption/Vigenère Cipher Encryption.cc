#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string a; cin >> a;
        if(a == "0") break;

        string b; cin >> b;

        string ans = "";

        for(int i=0; i<b.length(); i++) {
            ans += char('A' + (a[i % a.length()] - 'A' + b[i] - 'A' + 1) % 26);
        }

        cout << ans << "\n";
    }
}
