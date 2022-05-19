#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string str; cin >> str;
        if(str == "0") break;

        int ans = 0;
        for(int i=str.length()-1; i>=0; i--)
            ans += (str[i] - '0') * (pow(2, str.length()-i) - 1);
        cout << ans << "\n";
    }
}
