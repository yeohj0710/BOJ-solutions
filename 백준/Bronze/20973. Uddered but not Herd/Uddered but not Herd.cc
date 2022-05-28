#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a, b; cin >> a >> b;

    int i = 0, j = 0, ans = 1;

    while(true) {
        if(a[i % a.length()] == b[j]) i++, j++;
        else i++;

        if(j == b.length()) break;
        if(i % a.length() == 0) ans++;
    }

    cout << ans << "\n";
}
