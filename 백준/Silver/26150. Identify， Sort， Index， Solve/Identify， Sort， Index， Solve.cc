#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { string a; int b, c; };

bool cmp(s x, s y) { return x.b < y.b; }

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<s> v(N);
    for(int i=0; i<N; i++) cin >> v[i].a >> v[i].b >> v[i].c;

    sort(v.begin(), v.end(), cmp);

    string ans = "";

    for(int i=0; i<N; i++) {
        ans += v[i].a[v[i].c-1];

        if('a' <= ans[i] && ans[i] <= 'z') ans[i] += 'A' - 'a';
    }

    cout << ans << "\n";
}
