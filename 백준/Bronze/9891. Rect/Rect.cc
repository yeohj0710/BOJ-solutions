#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<int, int>> v(N);

    for(int i=0; i<N; i++) {
        int a, b, c, d; cin >> a >> b >> c >> d;

        v[i] = {abs(a - c), abs(b - d)};

        if(v[i].first > v[i].second) swap(v[i].first, v[i].second);
    }

    int ans = 0;

    for(int i=0; i<N; i++)
        for(int j=i+1; j<N; j++)
            if((v[i].first < v[j].first && v[i].second > v[j].second)
               || (v[i].first > v[j].first && v[i].second < v[j].second)) ans++;

    cout << ans << "\n";
}
