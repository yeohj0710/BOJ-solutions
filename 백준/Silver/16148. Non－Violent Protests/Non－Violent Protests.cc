#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N; cin >> N;

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        sort(v.begin(), v.end());

        int ans = N;

        for(int i=0; i<N; i++)
            if(v[i] > i) {
                ans = i;
                break;
            }

        cout << "Data Set " << t << ":\n";
        cout << ans << "\n\n";
    }
}
