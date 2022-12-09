#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v;

int f(int n) {
    if(n*2 >= v.size()) return 0;

    int lv = v[n*2] + f(n*2);
    int rv = v[n*2 + 1] + f(n*2 + 1);

    if(lv < rv) v[n*2] += rv - lv;
    else v[n*2 + 1] += lv - rv;

    return max(lv, rv);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    v.resize(1 << (N+1));
    for(int i=2; i<v.size(); i++) cin >> v[i];

    f(1);

    int ans = 0;
    for(int i=0; i<v.size(); i++) ans += v[i];

    cout << ans << "\n";
}
