#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string str; cin >> str;

    str = str.substr(2, str.length()-2);

    string div = "1";

    for(int i=0; i<str.length(); i++) div += '0';

    cout << "YES\n";

    cout << str << " " << div << "\n";
}
