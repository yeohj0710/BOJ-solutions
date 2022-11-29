#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    unordered_map<int, int> m;

    for(int i=2; i*i<=1e9; i++)
        for(int j=i*i; j<=1e9; j*=i)
            if(m[j] == 0) m[j] = i;

    int N; cin >> N;

    int ans = 0;

    while(N--) {
        int x; cin >> x;

        if(m[x] != 0) ans += m[x];
        else ans += x;
    }

    cout << ans << "\n";
}
