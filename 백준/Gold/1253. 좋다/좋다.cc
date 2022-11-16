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

    int ans = 0;

    for(int i=0; i<N; i++) {
        vector<int> u;

        for(int j=0; j<N; j++)
            if(j != i) u.push_back(v[j]);

        int l = 0, r = u.size() - 1;

        while(l < r) {
            int sum = u[l] + u[r];

            if(sum == v[i]) {
                ans++;
                break;
            }

            if(sum < v[i]) l++;
            else r--;
        }
    }

    cout << ans << "\n";
}
