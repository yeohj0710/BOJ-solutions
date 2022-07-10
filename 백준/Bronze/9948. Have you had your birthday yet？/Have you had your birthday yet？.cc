#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string mon[13] = {"", "January", "February", "March", "April",
                       "May", "June", "July", "August", "September",
                       "October", "November", "December"};

    while(true) {
        int x; cin >> x;
        string str; cin >> str;
        if(x == 0 && str == "#") break;

        if(str == mon[8] && x == 4) cout << "Happy birthday\n";
        else if(str == mon[2] && x == 29) cout << "Unlucky\n";
        else {
            int y;
            for(int i=1; i<=12; i++)
                if(str == mon[i]) y = i;

            if(y < 8) {
                cout << "Yes\n";
                continue;
            }
            else if(y > 8) {
                cout << "No\n";
                continue;
            }

            if(x < 4) cout << "Yes\n";
            else if(x > 4) cout << "No\n";
        }
    }
}
