#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string a, b; int n;

    getline(cin, a);
    cin >> n;
    cin.ignore(); getline(cin, b);

    int ans = 0;

    for(int i=0; i<b.length(); i++)
        if(b.substr(i, a.length()) == a) ans++;

    cout << ans << "\n";
}
