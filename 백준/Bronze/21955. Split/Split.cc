#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    cout << str.substr(0, str.length()/2) << " "
          << str.substr(str.length()/2, str.length()/2) << "\n";
}
