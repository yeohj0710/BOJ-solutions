#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b; cin >> a >> b;

    int ans = 0;

    if(a == b) ans = 0;
    else if(a != 0 && a != 2 && a != 5 && b != 0 && b != 2 && b != 5) ans = 0;
    else if(a != 0 && a != 2 && a != 5) ans = 1;
    else if(b != 0 && b != 2 && b != 5) ans = -1;
    else if(a == 0 && b == 2) ans = -1;
    else if(a == 2 && b == 0) ans = 1;
    else if(a == 2 && b == 5) ans = -1;
    else if(a == 5 && b == 2) ans = 1;
    else if(a == 5 && b == 0) ans = -1;
    else if(a == 0 && b == 5) ans = 1;

    if(ans == -1) cout << ">\n";
    else if(ans == 0) cout << "=\n";
    else if(ans == 1) cout << "<\n";
}
