#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        int sum = 0;
        for(int i=0; i<str.length(); i++) sum += str[i] - '0';

        if(sum % 9 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
}
