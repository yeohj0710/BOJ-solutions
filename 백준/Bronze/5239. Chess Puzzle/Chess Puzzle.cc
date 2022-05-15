#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<pair<int, int>> v;
        for(int i=0; i<N; i++) {
            int x, y; cin >> x >> y;

            v.push_back({x, y});
        }

        bool check = true;

        for(int i=0; i<N; i++)
            for(int j=i+1; j<N; j++)
                if(v[i].first == v[j].first || v[i].second == v[j].second) check = false;

        if(check) cout << "SAFE\n";
        else cout << "NOT SAFE\n";
    }
}
