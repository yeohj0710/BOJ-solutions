#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int a; cin >> a;

    int x = 0;

    for(int i=0; i<str.length(); i++)
        if(str[i] == 'B') x += pow(2, i);

    x += a;

    string ans = "";

    while(x > 0) {
        if(x % 2 == 1) ans += "B";
        else ans += "A";

        x /= 2;
    }

    while(ans.length() < str.length()) ans += "A";

    cout << ans << "\n";
}
