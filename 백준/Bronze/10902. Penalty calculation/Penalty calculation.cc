#include <bits/stdc++.h>
#define int long long
using namespace std;

struct S { int t, s; };

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int ans = 0;

    vector<S> v(N);

    for(int i=0; i<N; i++) cin >> v[i].t >> v[i].s;

    int Max = 0;
    for(int i=0; i<N; i++) Max = max(Max, v[i].s);

    int f;
    for(int i=0; i<N; i++)
        if(v[i].s == Max) {
            f = i;
            break;
        }

    if(v[f].s == 0) ans = 0;
    else ans = v[f].t + (f+1-1) * 20;

    cout << ans << "\n";
}
