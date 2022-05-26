#include <bits/stdc++.h>
#define int long long
using namespace std;

struct S { string str; int n = 0, p = 0; };

bool cmp(S &a, S &b) {
    if(a.n != b.n) return a.n > b.n;
    else return a.p < b.p;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<S> v(N);

    for(int i=0; i<N; i++) {
        cin >> v[i].str;

        for(int j=0; j<4; j++) {
            int x, y; cin >> x >> y;

            if(y > 0) {
                v[i].n++;
                v[i].p += y + (x-1)*20;
            }
        }
    }

    sort(v.begin(), v.end(), cmp);

    cout << v[0].str << " " << v[0].n << " " << v[0].p << "\n";
}
