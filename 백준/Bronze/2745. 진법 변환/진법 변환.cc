#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;
    int x; cin >> x;

    int ans = 0;

    for(int i=0; i<str.length(); i++) {
        ans *= x;

        if(str[i] >= '0' && str[i] <= '9') ans += str[i] - '0';
        else if(str[i] >= 'A' && str[i] <= 'Z') ans += str[i] - 'A' + 10;
    }

    cout << ans << "\n";
}
