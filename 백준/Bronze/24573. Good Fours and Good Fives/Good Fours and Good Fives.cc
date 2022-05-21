#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int ans = 0;
    for(int i=0; i<=N/4; i++)
        if((N - i*4) % 5 == 0) ans++;

    cout << ans << "\n";
}
