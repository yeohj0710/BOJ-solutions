#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int ans, Min = INT_MAX;
    for(int i=0; i<N; i++) {
        int sum = 0;
        for(int j=0; j<N; j++) sum += abs(v[i] - v[j]);

        if(sum < Min) {
            Min = sum;
            ans = v[i];
        }
    }

    cout << ans << "\n";
}
