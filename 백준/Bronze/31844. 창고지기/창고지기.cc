#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string s; cin >> s;

    int a = 0, b = 0, c = 0;

    for(int i=0; i<s.length(); i++) {
        if(s[i] == '@') a = i;
        else if(s[i] == '#') b = i;
        else if(s[i] == '!') c = i;
    }

    if(a < b && b < c) cout << (b - a - 1) + (c - b) << "\n";
    else if(a > b && b > c) cout << (a - b - 1) + (b - c) << "\n";
    else cout << -1 << "\n";
}
