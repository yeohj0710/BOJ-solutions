#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    map<int, bool> m;

    while(N--) {
        int x; cin >> x;

        m[x] = true;
    }

    for(int i=1; ; i++) {
        if(!m[i]) {
            cout << i << "\n";
            break;
        }
    }
}
