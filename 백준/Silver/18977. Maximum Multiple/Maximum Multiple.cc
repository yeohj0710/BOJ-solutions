#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        if(N % 3 == 0) cout << (N/3)*(N/3)*(N/3) << "\n";
        else if(N % 4 == 0) cout << (N/2)*(N/4)*(N/4) << "\n";
        else cout << -1 << "\n";
    }
}
