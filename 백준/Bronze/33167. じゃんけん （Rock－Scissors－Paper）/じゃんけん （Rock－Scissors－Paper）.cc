#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int n; cin >> n;

    string s, t; cin >> s >> t;

    int a = 0, b = 0;

    for(int i=0; i<n; i++) {
        if(s[i] == 'R') {
            if(t[i] == 'R') continue;
            else if(t[i] == 'S') a++;
            else b++;
        }
        else if(s[i] == 'S') {
            if(t[i] == 'R') b++;
            else if(t[i] == 'R') continue;
            else a++;
        }
        else {
            if(t[i] == 'R') a++;
            else if(t[i] == 'S') b++;
            else continue;
        }
    }

    cout << a << " " << b << "\n";
}
