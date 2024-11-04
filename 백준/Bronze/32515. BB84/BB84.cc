#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    string a, b, c, d; cin >> a >> b >> c >> d;

    string s = "";

    for(int i=0; i<n; i++) {
        if(a[i] == c[i]) {
            if(b[i] != d[i]) {
                cout << "htg!\n";
                return 0;
            }

            s += b[i];
        }
    }

    cout << s << "\n";
}
