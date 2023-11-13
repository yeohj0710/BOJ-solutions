#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b; string str; cin >> a >> str >> b;

    if(str == "annyong") {
        if(b % 2 == 1) cout << b << "\n";
        else if(b - 1 >= 1) cout << b - 1 << "\n";
        else cout << b + 1 << "\n";
    }
    else {
        if(b % 2 == 0) cout << b << "\n";
        else if(b - 1 >= 1) cout << b - 1 << "\n";
        else cout << b + 1 << "\n";
    }
}
