#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0), cin.tie(0);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N; cin >> N;

        vector<int> v(N);
        for(int i=0; i<N; i++) cin >> v[i];

        sort(v.begin(), v.end());

        if(v[0] >= 2) {
            cout << "Set #" << t << ": " << 1 << "\n\n";
            continue;
        }

        int sum = v[0];
        bool check = false;

        for(int i=1; i<N; i++) {
            if(v[i] > sum + 1) {
                cout << "Set #" << t << ": " << sum + 1 << "\n\n";

                check = true;
                break;
            }

            sum += v[i];
        }

        if(!check) cout << "Set #" << t << ": " << sum + 1 << "\n\n";
    }
}
