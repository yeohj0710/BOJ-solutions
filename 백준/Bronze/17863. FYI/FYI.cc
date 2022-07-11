#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    if(str.substr(0, 3) == "555") cout << "YES\n";
    else cout << "NO\n";
}
