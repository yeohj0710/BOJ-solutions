#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(30001), u(30001);

    int ans = 0;
    while(N--) {
        int x; cin >> x;

        ans += u[x] + v[x] * (v[x] - 1) / 2;

        v[x]++;

        for(int i=1; i<x; i++)
            if(x + (x - i) <= 30000) u[x + (x - i)] += v[i];
        for(int i=30000; i>x; i--)
            if(x - (i - x) >= 1) u[x - (i - x)] += v[i];
    }

    cout << ans << "\n";
}
