#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int Max = 1e8 + 1;
    vector<bool> p(Max);

    vector<int> v;
    v.push_back(2);

    for(int i=3; i<Max; i+=2) {
        if(p[i]) continue;

        v.push_back(i);

        for(int j=i; j<Max; j+=i*2) p[j] = true;
    }

    int N; cin >> N;

    int ans = 1, mod = 4294967296;

    for(int i=0; i<v.size() && v[i] <= N; i++) {
        int x = 1;

        while(x * v[i] <= N) x *= v[i];

        ans = (ans * x) % mod;
    }

    cout << ans << "\n";
}
