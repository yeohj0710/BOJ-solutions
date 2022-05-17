#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        cout << "Case #" << t << ": ";

        int N, K; cin >> N >> K;

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        sort(v.begin(), v.end());

        int sum = 0, ans = 0;
        bool check = false;

        for(int i=0; i<N; i++) {
            sum += v[i];

            if(sum > K) {
                cout << i << "\n";
                check = true;
                break;
            }
        }
        if(!check) cout << N << "\n";
    }
}
