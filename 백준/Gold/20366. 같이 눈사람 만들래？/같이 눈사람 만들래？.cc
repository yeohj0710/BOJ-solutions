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

    int ans = LLONG_MAX;

    for(int i=0; i<N; i++)
        for(int j=i+3; j<N; j++) {
            int l = i+1, r = j-1;

            while(l < r) {
                int dif = abs((v[i] + v[j]) - (v[l] + v[r]));

                ans = min(ans, dif);

                if((v[l] + v[r]) < (v[i] + v[j])) l++;
                else r--;
            }
        }

    cout << ans << "\n";
}
