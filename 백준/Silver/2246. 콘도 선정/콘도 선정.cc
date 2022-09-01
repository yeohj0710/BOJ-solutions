#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<int, int>> v(N);
    for(int i=0; i<N; i++)
        cin >> v[i].first >> v[i].second;

    int ans = 0;

    for(int i=0; i<N; i++) {
        bool check = true;

        for(int j=0; j<N; j++) {
            if(v[j].first < v[i].first && v[j].second <= v[i].second) check = false;
            if(v[j].second < v[i].second && v[j].first <= v[i].first) check = false;
        }

        if(check) ans++;
    }

    cout << ans << "\n";
}
