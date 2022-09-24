#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v, w;

int init(int n, int b, int e) {
    if(b == e) return v[n] = w[b];

    int lv = init(n*2, b, (b+e)/2);
    int rv = init(n*2 + 1, (b+e)/2 + 1, e);

    return v[n] = max(lv, rv);
}

int f(int n, int b, int e, int l, int r) {
    if(r < b || e < l) return INT_MIN;
    if(l <= b && e <= r) return v[n];

    int lv = f(n*2, b, (b+e)/2, l, r);
    int rv = f(n*2 + 1, (b+e)/2 + 1, e, l, r);

    return max(lv, rv);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> u(N+1);
    w.resize(N+1);

    for(int i=1; i<=N; i++) {
        int x; cin >> x >> w[i];

        u[i] = u[i-1] + x;
    }

    v.resize(N*4);
    init(1, 1, N);

    int i = 1, j = 1, ans = INT_MAX;

    while(j <= N) {
        int sum = u[j] - u[i-1];

        if(sum < M) j++;
        else {
            ans = min(ans, f(1, 1, N, i, j));

            i++;
            if(i > j) j = i;
        }
    }

    cout << ans << "\n";
}
