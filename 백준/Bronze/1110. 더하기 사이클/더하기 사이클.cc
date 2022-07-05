#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    int M = N;

    int ans = 0;
    while(true) {
        N = (N % 10) * 10 + (N / 10 + N % 10) % 10;
        ans++;

        if(N == M) {
            cout << ans << "\n";
            break;
        }
    }
}
