#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(M);
    for(int i=0; i<M; i++) cin >> v[i];

    sort(v.begin(), v.end(), greater<int>());

    int ans = 0, price;
    for(int i=0; i<min(M, N); i++) {
        if(v[i] * (i+1) > ans) {
            ans = v[i] * (i+1);
            price = v[i];
        }
    }

    cout << price << " " << ans << "\n";
}
