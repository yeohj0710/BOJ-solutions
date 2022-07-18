#include <bits/stdc++.h>
#define int long long
using namespace std;

struct s { int a, b; bool c; };

bool cmp1(s x, s y) {
    return x.b < y.b;
}

bool cmp2(s x, s y) {
    return x.a < y.a;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M, K; cin >> N >> M >> K;

    vector<s> v(N);
    for(int i=0; i<N; i++) cin >> v[i].a >> v[i].b;

    sort(v.begin(), v.end(), cmp1);

    int cnt = 0, ans = 0;

    if(K == 0) {
        cout << ans << "\n";
        return 0;
    }

    for(int i=0; i<N; i++) {
        if(M >= v[i].b) {
            cnt++;
            ans += 140;
            v[i].c = true;
        }

        if(cnt == K) {
            cout << ans << "\n";
            return 0;
        }
    }

    sort(v.begin(), v.end(), cmp2);

    for(int i=0; i<N; i++) {
        if(M >= v[i].a && !v[i].c) {
            cnt++;
            ans += 100;
        }

        if(cnt == K) {
            cout << ans << "\n";
            return 0;
        }
    }

    cout << ans << "\n";
}
