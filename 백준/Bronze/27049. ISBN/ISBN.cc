#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    cin.tie(0)->sync_with_stdio(0);

    string str; cin >> str;

    int idx;

    for(int i=0; i<str.length(); i++)
        if(str[i] == '?') idx = i;

    for(int i=0; i<=10; i++) {
        int sum = 0;

        for(int j=0; j<str.length(); j++) {
            int x;

            if(str[j] >= '0' && str[j] <= '9') x = str[j] - '0';
            else if(str[j] == '?') x = i;
            else if(str[j] == 'X') x = 10;

            sum += x * (10 - j);
        }

        if(sum % 11 == 0) {
            if(idx != 9 && i == 10) continue;
            else {
                if(i < 10) cout << i << "\n";
                else cout << "X\n";

                return 0;
            }
        }
    }

    cout << -1 << "\n";
}
