#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    if(N == 0) {
        cout << 0 << "\n";
        return 0;
    }

    string ans = "";

    while(N > 0) {
        if(N % M >= 0 && N % M <= 9) ans = char('0' + N % M) + ans;
        else if(N % M >= 10 && N % M <= 16) ans = char('A' + N % M - 10) + ans;

        N /= M;
    }

    cout << ans << "\n";
}
