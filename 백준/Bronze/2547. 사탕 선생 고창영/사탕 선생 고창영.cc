#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        int sum = 0;
        for(int i=0; i<N; i++) {
            int x; cin >> x;
            sum += x;
            sum %= N;
        }

        if(sum % N == 0) cout << "YES\n";
        else cout << "NO\n";
    }
}
