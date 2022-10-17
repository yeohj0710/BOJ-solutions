#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    double a;
    string str;

    while(cin >> a >> str) {
        if(str.front() == '.') str = '0' + str;

        double b = stod(str);

        int ans = round(sqrt(a * (b + 0.16) / 0.067));

        cout << ans << "\n";
    }
}
