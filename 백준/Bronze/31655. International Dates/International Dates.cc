#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string s; cin >> s;

    int a = stoi(s.substr(0, 2));
    int b = stoi(s.substr(3, 2));

    if(a <= 12 && b <= 12) cout << "either\n";
    else if(a <= 12) cout << "US\n";
    else cout << "EU\n";
}
