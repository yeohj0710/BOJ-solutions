#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string str; getline(cin, str);
        if(str == "#") break;

        int a, b; cin >> a >> b;
        cin.ignore();

        string ans = "";
        int temp = b;

        while(temp > 0) {
            int x = temp % a;

            if(x < 10) ans = char(x + '0') + ans;
            else ans = char(x - 10 + 'A') + ans;

            temp /= a;
        }

        cout << str << ", " << b << ", " << ans << "\n";
    }
}
