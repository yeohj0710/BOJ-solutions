#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string s; cin >> s;

    cout << s << "\n";

    for(int i=0; i<25; i++) {
        for(int j=0; j<s.length(); j++) {
            s[j] = char((s[j] - 'A' - 1 + 26) % 26 + 'A');
        }

        cout << s << "\n";
    }
}
