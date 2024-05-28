#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n, m; cin >> n >> m;

    int pre = 0, cur = 0;

    while(n--) {
        string s; cin >> s;

        if(s == "save") pre = cur;
        else if(s == "load") cur = pre;
        else if(s == "shoot") cur = max(cur - 1, (int)0);
        else if(s == "ammo") cur += m;

        cout << cur << "\n";
    }
}
