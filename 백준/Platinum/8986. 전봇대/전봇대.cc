#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int l = 0, r = v[N-1];
    int tr = 1e4;

    while(r - l >= 3) {
        int m1 = (l*2 + r) / 3;
        int m2 = (l + r*2) / 3;

        int s1 = 0;
        for(int i=0; i<N; i++) s1 += abs(m1*i - v[i]);

        int s2 = 0;
        for(int i=0; i<N; i++) s2 += abs(m2*i - v[i]);

        if(s1 < s2) r = m2;
        else if(s1 > s2) l = m1;
    }

    int ans = LLONG_MAX;

    for(int i=l; i<=r; i++) {
        int sum = 0;
        for(int j=0; j<N; j++) sum += abs(i*j - v[j]);

        ans = min(ans, sum);
    }

    cout << ans << "\n";
}
