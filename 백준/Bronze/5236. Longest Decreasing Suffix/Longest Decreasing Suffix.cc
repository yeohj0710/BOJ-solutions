#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        int i = str.length()-2;
        while(true) {
            if(str[i] <= str[i+1]) break;

            i--;
        }

        cout << "The longest decreasing suffix of " << str << " is " << str.substr(i+1, str.length()-i) << "\n";
    }
}
