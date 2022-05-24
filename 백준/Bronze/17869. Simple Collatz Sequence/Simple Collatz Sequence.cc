#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int ans = 0;
    while(N != 1) {
        if(N % 2 == 0) N /= 2;
        else N++;

        ans++;
    }

    cout << ans << "\n";
}
