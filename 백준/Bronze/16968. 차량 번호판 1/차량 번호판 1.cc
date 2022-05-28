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
            if(i > 0 && str[i-1] == str[i]) ans *= 25;
            else ans *= 26;
        }
        else {
            if(i > 0 && str[i-1] == str[i]) ans *= 9;
            else ans *= 10;
        }
    }

    cout << ans << "\n";
}
