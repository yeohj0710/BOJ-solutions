#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    for(int i=0; i<str.length(); i++) {
        if(str[i] >= 'a' && str[i] <= 'z')
            cout << char(str[i] - 'a' + 'A');
        else cout << char(str[i] - 'A' + 'a');
    }
    cout << "\n";
}
