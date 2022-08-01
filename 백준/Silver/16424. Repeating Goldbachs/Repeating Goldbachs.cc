#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int Max = 1e6 + 1;

    vector<bool> p(Max, true);
    p[1] = false;

    for(int i=2; i*i<Max; i++)
        for(int j=2; i*j<Max; j++) p[i*j] = false;

    vector<int> v;
    for(int i=2; i<Max; i++)
        if(p[i]) v.push_back(i);

    int N; cin >> N;

    if(N < 4) {
        cout << 0 << "\n";
        return 0;
    }

    int ans = 0;

    while(true) {
        for(int i=0; i<v.size(); i++) {
            if(p[N - v[i]]) {
                N = (N - v[i]) - v[i];
                break;
            }
        }

        ans++;

        if(N < 3) break;
    }

    cout << ans << "\n";
}
