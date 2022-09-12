#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int ans = 0;

    for(int i=0; i<str.length(); i++) {
        if(str[i] >= 'A' && str[i] <= 'Z' && i % 4 != 0) {
            ans += 4 - (i % 4);

            for(int j=0; j<(4 - i % 4); j++) str = '0' + str;

            i += (4 - i % 4);
        }
    }

    cout << ans << "\n";
}
