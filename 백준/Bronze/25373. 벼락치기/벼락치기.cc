#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int l = 0, r = 1e17;

    while(l <= r) {
        int m = (l + r)/2;

        int x = 0;
        for(int i=0; i<7; i++) x += max(m - i, (int)0);

        if(x >= N) r = m - 1;
        else l = m + 1;
    }

    cout << l << "\n";
}
