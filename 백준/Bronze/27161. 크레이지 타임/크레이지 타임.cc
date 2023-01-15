#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int cur = 1;
    bool fow = true;

    while(N--) {
        string str; int x; cin >> str >> x;

        cout << cur << " ";

        if(str != "HOURGLASS" && cur == x) cout << "YES\n";
        else cout << "NO\n";

        if(str == "HOURGLASS" && cur != x) fow = !fow;

        if(fow) cur = cur % 12 + 1;
        else cur = (cur - 1 + 12 - 1) % 12 + 1;
    }
}
