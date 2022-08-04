#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    bool check = true;
    for(int i=0; i<N; i++)
        if(v[i] < i+1) check = false;

    if(!check) {
        cout << -1 << "\n";
        return 0;
    }

    int ans = 0;

    for(int i=N-1; i>=1; i--) {
        if(v[i-1] >= v[i]) {
            v[i-1] = v[i] - 1;
            ans++;
        }
    }

    cout << ans << "\n";
}
