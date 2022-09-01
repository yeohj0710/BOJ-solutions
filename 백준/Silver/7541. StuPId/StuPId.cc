#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        string str; cin >> str;

        reverse(str.begin(), str.end());

        for(int i=0; i<=9; i++) {
            int sum = 0;

            for(int j=0; j<str.length(); j++) {
                if(str[j] != '?') {
                    if(j % 3 == 0) sum += (str[j] - '0') * 9;
                    else if(j % 3 == 1) sum += (str[j] - '0') * 3;
                    else if(j % 3 == 2) sum += (str[j] - '0') * 7;
                }
                else {
                    if(j % 3 == 0) sum += i * 9;
                    else if(j % 3 == 1) sum += i * 3;
                    else if(j % 3 == 2) sum += i * 7;
                }
            }

            if(sum % 10 == 0) {
                for(int j=0; j<str.length(); j++)
                    if(str[j] == '?') str[j] = char('0' + i);

                reverse(str.begin(), str.end());

                cout << "Scenario #" << t << ":\n";
                cout << str << "\n\n";

                break;
            }
        }
    }
}
