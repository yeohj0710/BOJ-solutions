#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<bool> prime(1001, true); prime[1] = false;
    for(int i=2; i*i<=1000; i++)
        for(int j=2; i*j<=1000; j++) prime[i*j] = false;

    int N; cin >> N;

    int ans = 0;
    while(N--) {
        int x; cin >> x;
        if(prime[x]) ans++;
    }

    cout << ans << "\n";
}
