#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(0), cin.tie(0);

    string a, b; cin >> a >> b;

    int cur = 0, sum = 0;

    for(int i=0; i<b.length(); i++) {
        if('A' <= b[i] && b[i] <= 'Z') cur += b[i] - 'A' + 1;
        else {
            int x = b[i] - 'a' + 1;

            for(int j=cur; j<cur+x; j++) sum += a[j] - '0';

            cur += x;
        }
    }

    if(cur == a.length()) cout << sum << "\n";
    else cout << "non sequitur\n";
}
