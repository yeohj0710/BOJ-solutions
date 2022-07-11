#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    for(int i=0; i<str.length(); i+=10) {
        if(i+10 < str.length()) cout << str.substr(i, 10);
        else cout << str.substr(i, str.length()-i);

        cout << "\n";
    }
}
