#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<pair<int, int>> v(N);
    for(int i=0; i<N; i++) cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end());

    int Max = 0, ans = 0;
    for(int i=0; i<N; i++) {
        int sum = 0;
        for(int j=i; j<N; j++) sum += max(v[i].first - v[j].second, (int)0);

        if(sum > Max) {
            Max = sum;
            ans = v[i].first;
        }
    }

    cout << ans << "\n";
}
