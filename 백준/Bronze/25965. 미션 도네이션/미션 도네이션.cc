#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { int a, b, c; };

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int N; cin >> N;

        vector<s> v(N);
        for(int i=0; i<N; i++)
            cin >> v[i].a >> v[i].b >> v[i].c;

        int a, b, c; cin >> a >> b >> c;

        int ans = 0;

        for(int i=0; i<N; i++)
            ans += max(v[i].a * a - v[i].b * b + v[i].c * c, (int)0);

        cout << ans << "\n";
    }
}
