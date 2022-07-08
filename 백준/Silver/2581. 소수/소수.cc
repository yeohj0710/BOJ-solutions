#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<bool> prime(10001, true);
    prime[1] = false;

    for(int i=2; i*i<=10000; i++)
        for(int j=2; i*j<=10000; j++) prime[i*j] = false;

    int N, M; cin >> N >> M;

    bool check = false;
    int ans = 0, Min = -1;

    for(int i=N; i<=M; i++) {
        if(prime[i] && !check) {
            Min = i;
            check = true;
        }

        if(prime[i]) ans += i;
    }

    if(Min != -1) cout << ans << "\n" << Min << "\n";
    else cout << -1 << "\n";
}
