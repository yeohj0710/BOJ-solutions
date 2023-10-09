#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b; cin >> a >> b;

    if(a <= 50 && b <= 10) cout << "White\n";
    else if(b > 30) cout << "Red\n";
    else cout << "Yellow\n";
}
