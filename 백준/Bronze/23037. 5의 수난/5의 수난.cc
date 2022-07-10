#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int ans = 0;

    for(int i=0; i<str.length(); i++) ans += pow(str[i] - '0', 5);

    cout << ans << "\n";
}
