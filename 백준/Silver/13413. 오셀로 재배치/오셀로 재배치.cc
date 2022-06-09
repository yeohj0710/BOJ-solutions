#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        string a, b; cin >> a >> b;

        int x = 0, y = 0;
        for(int i=0; i<N; i++) {
            if(a[i] == 'B' && b[i] == 'W') x++;
            else if(a[i] == 'W' && b[i] == 'B') y++;
        }

        cout << max(x, y) << "\n";
    }
}
