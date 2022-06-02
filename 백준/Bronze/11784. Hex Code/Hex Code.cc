#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str;

    while(cin >> str) {
        string ans = "";

        for(int i=0; i<str.length(); i+=2) {
            int x = 0;

            if(str[i] >= '0' && str[i] <= '9') x += 16 * (str[i] - '0');
            else x += 16 * (str[i] - 'A' + 10);

            if(str[i+1] >= '0' && str[i+1] <= '9') x += str[i+1] - '0';
            else x += str[i+1] - 'A' + 10;

            ans += char(x);
        }

        cout << ans << "\n";
    }
}
