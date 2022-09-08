#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        vector<pair<int, int>> v(N);
        for(int i=0; i<N; i++) cin >> v[i].first >> v[i].second;

        int cnt = 0;

        for(int i=0; i<N; i++)
            for(int j=i+1; j<N; j++) {
                bool check = false;

                if(v[i].first == v[j].first && abs(v[i].second - v[j].second) == 1) check = true;
                if(v[i].second == v[j].second && abs(v[i].first - v[j].first) == 1) check = true;

                if(check) cnt++;
            }

        int ans = N*4 - cnt*2;

        cout << ans << "\n";
    }
}
