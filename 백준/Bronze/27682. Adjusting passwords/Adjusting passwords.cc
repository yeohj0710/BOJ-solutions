#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int T; cin >> T;

    while(T--) {
        string a, b; cin >> a >> b;

        if(a == b) {
            cout << "*\n";
            continue;
        }

        int idx = -1;

        for(int i=0; i<max(a.length(), b.length()); i++) {
            if(i >= a.length() || i >= b.length()) {
                idx = i;
                break;
            }
            else if(a[i] != b[i]) {
                idx = i;
                break;
            }
        }

        if(a.length() + 1 <= b.length() - idx + a.length() - idx) {
            cout << "*" << a << "*\n";
        }
        else {
            for(int i=0; i<b.length()-idx; i++) cout << "<";
            for(int i=idx; i<a.length(); i++) cout << a[i];
            cout << "*\n";
        }
    }
}
