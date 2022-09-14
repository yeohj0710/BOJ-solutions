#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int ans = 0;

    if(str.length() > 2 && str[0] == '0' && str[1] == 'x') {
        for(int i=2; i<str.length(); i++) {
            ans *= 16;

            if(str[i] >= '0' && str[i] <= '9') ans += str[i] - '0';
            else if(str[i] >= 'a' && str[i] <= 'f') ans += 10 + str[i] - 'a';
        }
    }
    else if(str.length() > 1 && str[0] == '0') {
        for(int i=1; i<str.length(); i++) {
            ans *= 8;

            ans += str[i] - '0';
        }
    }
    else ans = stoi(str);

    cout << ans << "\n";
}
