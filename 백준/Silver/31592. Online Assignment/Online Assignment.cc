#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string s = "fffff";

    for(int i=0; i<5; i++) {
        cout << s << endl;

        string ss; cin >> ss;

        if(ss == "completed") return 0;

        int x; cin >> x;

        s[i] = 't';

        cout << s << endl;

        cin >> ss;

        if(ss == "completed") return 0;

        int y; cin >> y;

        if(x > y) s[i] = 'f';
    }

    cout << s << endl;

    string ss; cin >> ss;

    if(ss == "completed") return 0;
}
