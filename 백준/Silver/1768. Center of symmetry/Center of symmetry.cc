#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<pair<double, double>> v(N);
        for(int i=0; i<N; i++) cin >> v[i].first >> v[i].second;

        sort(v.begin(), v.end());

        double x = v[0].first + v[N-1].first;
        double y = v[0].second + v[N-1].second;

        bool check = true;
        for(int i=0; i<N/2; i++) {
            if(v[i].first + v[N-1-i].first != x) check = false;
            if(v[i].second + v[N-1-i].second != y) check = false;
        }

        if(check) cout << "yes\n";
        else cout << "no\n";
    }
}
