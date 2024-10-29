#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    string a, b; cin >> a >> b;

    int x = 0, y = 0;

    for(int i=0; i<n; i++) {
        if((a[i] == 'R' && b[i] == 'S') || (a[i] == 'S' && b[i] == 'P') || (a[i] == 'P' && b[i] == 'R')) x++;
        else if((a[i] == 'R' && b[i] == 'P') || (a[i] == 'S' && b[i] == 'R') || (a[i] == 'P' && b[i] == 'S')) y++;
    }

    if(x > y) cout << "victory\n";
    else if(x < y) cout << "defeat\n";
}
