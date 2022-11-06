#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    str += "ILOVEYONSEI";

    int ans = 0;

    for(int i=1; i<str.length(); i++)
        ans += abs(str[i] - str[i-1]);

    cout << ans << "\n";
}
