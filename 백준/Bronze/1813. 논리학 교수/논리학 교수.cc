#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int cnt[51] = {};

    while(N--) {
        int x; cin >> x;

        cnt[x]++;
    }

    for(int i=50; i>=0; i--) {
        if(cnt[i] == i) {
            cout << i << "\n";
            return 0;
        }
    }

    cout << -1 << "\n";
}
