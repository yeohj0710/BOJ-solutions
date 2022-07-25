#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int x; cin >> x;

    string str = "";

    while(x > 0) {
        str = char(x % 2 + '0') + str;

        x /= 2;
    }

    int cur = str.length() - 1;
    while(str[cur] == '0') cur--;

    int a = pow(2, str.length());
    int b = cur + 1;

    if(b == 1) {
        a /= 2;
        b--;
    }

    cout << a << " " << b << "\n";
}
