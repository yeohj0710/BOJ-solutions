#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(M);
    for(int i=0; i<M; i++) cin >> v[i];

    int l = 1, r = N, ans = N;

    while(l <= r) {
        int m = (l + r)/2;

        bool check = true;
        if(v[0] - m > 0) check = false;
        if(v[M-1] + m < N) check = false;
        for(int i=1; i<M; i++)
            if(v[i-1] + m < v[i] - m) check = false;

        if(check) {
            ans = min(ans, m);
            r = m - 1;
        }
        else l = m + 1;
    }

    cout << ans << "\n";
}
