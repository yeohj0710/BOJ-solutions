#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; string str; cin >> N >> str;

    int b = 0, s = 0, a = 0, mx = 0;

    for(int i=0; i<str.length(); i++) {
        if(str[i] == 'B') b++;
        else if(str[i] == 'S') s++;
        else if(str[i] == 'A') a++;
    }

    mx = max({b, s, a});

    if(b == s && s == a) {
        cout << "SCU\n";

        return 0;
    }

    if(b == mx) cout << "B";
    if(s == mx) cout << "S";
    if(a == mx) cout << "A";

    cout << "\n";
}
