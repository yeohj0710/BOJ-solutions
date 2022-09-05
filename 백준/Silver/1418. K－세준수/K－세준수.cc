#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    int ans = 0;

    for(int i=1; i<=N; i++) {
        int tmp = i;

        bool check = true;

        for(int j=2; j<=M; j++)
            while(tmp % j == 0) tmp /= j;

        if(tmp == 1) ans++;
    }

    cout << ans << "\n";
}
