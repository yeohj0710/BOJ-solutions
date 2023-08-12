#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string str; cin >> str;

    if(str[0] == str[str.length()-1]) cout << "Lose" << "\n";
    else cout << "Win" << "\n";
}
