#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string a, b; cin >> a >> b;

        int x = 0, y = 0;
        for(int i=0; i<a.length(); i++) {
            if(a[i] == '0' && b[i] == '1') x++;
            else if(a[i] == '1' && b[i] == '0') y++;
        }

        cout << max(x, y) << "\n";
    }
}
