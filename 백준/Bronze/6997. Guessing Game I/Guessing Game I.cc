#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string a, b; cin >> a >> b;

        cout << "For secret = " << a << " and guess = " << b << ", ";

        int x = 0, y = 0;

        for(int i=0; i<4; i++)
            if(a[i] == b[i]) x++;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int cnt = 0;

        for(int i=0; i<4; i++)
            if(a[i] == b[i]) cnt++;

        y = max(cnt - x, (int)0);

        cout << x << " circles and " << y << " squares will light up.\n";
    }
}
