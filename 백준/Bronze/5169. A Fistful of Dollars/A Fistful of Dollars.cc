#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        int N, Q; cin >> N >> Q;

        vector<int> sum(N+1);
        while(Q--) {
            int a, b; cin >> a >> b;
            sum[a] += b;
        }

        int ans;
        bool found = false;

        for(int i=1; i<=N; i++) {
            bool check = true;
            for(int j=1; j<=N; j++)
                if(i != j && sum[i] <= sum[j]*2) check = false;

            if(check) {
                ans = i;
                found = true;
                break;
            }
        }

        cout << "Data Set " << t << ":\n";
        if(found) cout << ans << "\n";
        else cout << "No suspect.\n";
        cout << "\n";
    }
}
