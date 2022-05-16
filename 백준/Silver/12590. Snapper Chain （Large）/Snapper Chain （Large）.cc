#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N, K; cin >> N >> K;

        cout << "Case #" << t << ": ";

        if(K % (int)pow(2, N) == (int)pow(2, N) - 1) cout << "ON\n";
        else cout << "OFF\n";
    }
}
