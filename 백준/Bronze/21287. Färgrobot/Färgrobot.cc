#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string str; cin >> str;

    string ans = "";
    bool b[3] = {};

    for(int i=0; i<str.length(); i++) {
        if(str[i] == 'R') b[0] = true;
        else if(str[i] == 'G') b[1] = true;
        else b[2] = true;

        if(b[0] && b[1]) {
            while(str[i] != 'B') i++;
            ans += 'B';

            b[0] = b[1] = b[2] = false;
        }
        else if(b[1] && b[2]) {
            while(str[i] != 'R') i++;
            ans += 'R';

            b[0] = b[1] = b[2] = false;
        }
        else if(b[2] && b[0]) {
            while(str[i] != 'G') i++;
            ans += 'G';

            b[0] = b[1] = b[2] = false;
        }

        if(ans.length() == N) break;
    }

    cout << ans << "\n";
}
