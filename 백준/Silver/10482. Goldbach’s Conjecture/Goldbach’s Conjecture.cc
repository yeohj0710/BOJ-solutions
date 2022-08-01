#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int Max = 32001;

    vector<bool> p(Max, true);
    p[1] = false;

    for(int i=2; i*i<Max; i++)
        for(int j=2; i*j<Max; j++) p[i*j] = false;

    vector<int> v;
    for(int i=2; i<Max; i++)
        if(p[i]) v.push_back(i);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<pair<int, int>> u;

        for(int i=1; i<=N/2; i++) {
            if(p[i] && p[N-i]) u.push_back({i, N-i});
        }

        cout << N << " has " << u.size() << " representation(s)\n";

        for(int i=0; i<u.size(); i++)
            cout << u[i].first << "+" << u[i].second << "\n";

        cout << "\n";
    }
}
