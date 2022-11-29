#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int Max = 1e8 + 1;

    vector<bool> p(Max, true);
    p[1] = false;

    for(int i=2; i*i<Max; i++)
        for(int j=2; i*j<Max; j++) p[i*j] = false;

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<int> v(N+1);
        for(int i=1; i<=N; i++) {
            cin >> v[i];

            v[i] += v[i-1];
        }

        int ans = INT_MAX, l, r;

        for(int i=1; i<=N; i++)
            for(int j=i+1; j<=N; j++)
                if(p[v[j] - v[i-1]] && j-i+1 < ans) {
                    ans = j-i+1;
                    l = i, r = j;
                }

        if(ans != INT_MAX) {
            cout << "Shortest primed subsequence is length " << ans << ": ";

            for(int i=l; i<=r; i++) cout << v[i] - v[i-1] << " ";
            cout << "\n";
        }
        else cout << "This sequence is anti-primed.\n";
    }
}
