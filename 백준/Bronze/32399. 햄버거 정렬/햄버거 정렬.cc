#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string s; cin >> s;

    if(s == "(1)") cout << 0 << "\n";
    else if(s == "()1" || s == "1()" || s == "1)(" || s == ")(1") cout << 1 << "\n";
    else cout << 2 << "\n";
}
