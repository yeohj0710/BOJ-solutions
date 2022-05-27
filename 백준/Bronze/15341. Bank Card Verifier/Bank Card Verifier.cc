#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string a, b, c, d; cin >> a >> b >> c >> d;

        string str = a + b + c + d;
        if(str == "0000000000000000") break;

        int sum = 0;
        for(int i=0; i<str.length(); i++) {
            if(i % 2 == 0) {
                int x = (str[i] - '0') * 2;
                if(x > 9) x -= 9;
                sum += x;
            }
            else sum += str[i] - '0';
        }

        if(sum % 10 == 0) cout << "Yes\n";
        else cout << "No\n";
    }
}
