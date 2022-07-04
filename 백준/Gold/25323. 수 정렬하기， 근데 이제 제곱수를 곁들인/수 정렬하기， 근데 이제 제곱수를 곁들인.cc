#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    vector<int> u(v);
    sort(u.begin(), u.end());

    bool check = true;
    for(int i=0; i<N; i++) {
        int gcd = __gcd(v[i], u[i]);

        v[i] /= gcd;
        int l = 0, r = LLONG_MAX;
        while(l <= r) {
            int m = (l + r)/2;

            unsigned long long mm = m * m;

            if(mm >= v[i]) r = m - 1;
            else l = m + 1;
        }
        if(l*l != v[i]) check = false;

        u[i] /= gcd;
        l = 0, r = LLONG_MAX;
        while(l <= r) {
            int m = (l + r)/2;

            unsigned long long mm = m * m;

            if(mm >= u[i]) r = m - 1;
            else l = m + 1;
        }
        if(l*l != u[i]) check = false;
    }

    if(check) cout << "YES\n";
    else cout << "NO\n";
}
