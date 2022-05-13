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

        for(int i=str.length()-1; i>=0; i--) cout << str[i];
        cout << "\n";
    }
}
