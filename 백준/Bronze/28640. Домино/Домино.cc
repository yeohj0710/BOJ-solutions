#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string a, b; cin >> a >> b;

    int c = 0, d = 0;

    for(int i=0; i<a.length(); i++)
        if(a[i] == '|') c = i;

    for(int i=0; i<b.length(); i++)
        if(b[i] == '|') d = i;

    int e = c, f = a.length() - (c + 1);
    int g = d, h = b.length() - (d + 1);

    bool chk = false;

    if(e == g || e == h || f == g || f == h) chk = true;

    if(chk) cout << "Yes\n";
    else cout << "No\n";
}
