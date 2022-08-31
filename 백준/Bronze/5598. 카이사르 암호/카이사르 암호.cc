#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    for(int i=0; i<str.length(); i++)
        cout << char('A' + (str[i] - 'A' - 3 + 26) % 26);

    cout << "\n";
}
