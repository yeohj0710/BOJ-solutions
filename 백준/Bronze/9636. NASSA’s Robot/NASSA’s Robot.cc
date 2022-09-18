#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        int x = 0, y = 0, cnt = 0;

        for(int i=0; i<str.length(); i++) {
            if(str[i] == 'L') x--;
            else if(str[i] == 'R') x++;
            else if(str[i] == 'D') y--;
            else if(str[i] == 'U') y++;
            else if(str[i] == '?') cnt++;
        }

        cout << x - cnt << " " << y - cnt << " " << x + cnt << " " << y + cnt << "\n";
    }
}
