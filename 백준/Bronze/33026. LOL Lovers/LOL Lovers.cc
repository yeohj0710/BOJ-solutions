#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    string s; cin >> s;

    int a = 0, b = 0;

    for(int i=0; i<n; i++) {
        if(s[i] == 'L') a++;
        else b++;
    }

    for(int i=0; i<n-1; i++) {
        int aa = 0, bb = 0;

        for(int j=0; j<=i; j++) {
            if(s[j] == 'L') aa++;
            else bb++;
        }

        if(aa != a - aa && bb != b - bb) {
            cout << i + 1 << "\n";
            return 0;
        }
    }

    cout << -1 << "\n";
}
