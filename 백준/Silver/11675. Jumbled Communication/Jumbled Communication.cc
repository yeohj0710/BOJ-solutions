#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int x; cin >> x;

        for(int i=0; i<256; i++) {
            if((i ^ ((i << 1) % 256)) == x) {
                cout << i << " ";
                break;
            }
        }
    }

    cout << "\n";
}
