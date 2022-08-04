#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int ans = 1;

    for(int i=0; i<str.length(); i++) {
        if(str[i] == 'c') {
            if(i == 0 || (i > 0 && str[i-1] != 'c')) ans *= 26;
            else ans *= 25;
        }
        else if(str[i] == 'd') {
            if(i == 0 || (i > 0 && str[i-1] != 'd')) ans *= 10;
            else ans *= 9;
        }

        ans %= (int)(1e9 + 9);
    }

    cout << ans << "\n";
}
