#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int Max = 1e5;

    vector<bool> p(Max, true);
    p[1] = false;

    for(int i=2; i*i<Max; i++)
        for(int j=2; i*j<Max; j++) p[i*j] = false;

    vector<int> v;
    for(int i=2; i<Max; i++)
        if(p[i]) v.push_back(i);

    int N; cin >> N;

    int ans = 1;
    bool isp = false;
    map<int, bool> m;

    while(N--) {
        int x; cin >> x;

        if(m[x]) continue;
        m[x] = true;

        bool check = true;

        for(int i=0; i<v.size() && v[i]*v[i] <= x; i++)
            if(x % v[i] == 0) check = false;

        if(check) {
            ans *= x;
            isp = true;
        }
    }

    if(isp) cout << ans << "\n";
    else cout << -1 << "\n";
}
