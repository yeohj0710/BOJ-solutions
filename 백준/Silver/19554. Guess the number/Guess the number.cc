#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int l = 1, r = N;

    while(l <= r) {
        int m = (l + r)/2;

        cout << "? " << m << endl;

        int x; cin >> x;

        if(x == 0) {
            cout << "= " << m << endl;
            break;
        }

        if(x < 0) l = m + 1;
        else if(x > 0) r = m - 1;
    }
}
