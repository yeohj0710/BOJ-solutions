#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int x; cin >> x;

        string str; cin >> str;

        for(int i=0; i<str.length(); i++) {
            if(i+1 == x) continue;

            cout << str[i];
        }

        cout << "\n";
    }
}
