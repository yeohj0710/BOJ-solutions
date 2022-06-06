#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;
    cin.ignore();

    while(T--) {
        string str; getline(cin, str);

        int a = 0, b = 0;
        for(int i=0; i<str.length(); i++) {
            if(str[i] >= 'A' && str[i] <= 'Z') {
                if(str[i] == 'G') a++;
                else if(str[i] == 'B') b++;
            }
            else if(str[i] >= 'a' && str[i] <= 'z') {
                if(str[i] == 'g') a++;
                else if(str[i] == 'b') b++;
            }
        }

        if(a > b) cout << str << " is GOOD\n";
        else if(a < b) cout << str << " is A BADDY\n";
        else cout << str << " is NEUTRAL\n";
    }
}
