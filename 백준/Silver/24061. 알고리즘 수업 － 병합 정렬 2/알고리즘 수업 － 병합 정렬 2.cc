#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, M, cnt = 0;
vector<int> v, u;

void g(int l, int m, int r) {
    int i = l, j = m+1, k = l;

    while(i <= m && j <= r) {
        if(v[i] <= v[j]) u[k++] = v[i++];
        else u[k++] = v[j++];
    }
    while(i <= m) u[k++] = v[i++];
    while(j <= r) u[k++] = v[j++];

    for(i=l; i<=r; i++) {
        v[i] = u[i];
        cnt++;

        if(cnt == M) {
            for(int i=0; i<N; i++) cout << v[i] << " ";
            cout << "\n";

            exit(0);
        }
    }
}

void f(int l, int r) {
    if(l == r) return;

    int m = (l+r)/2;

    f(l, m);
    f(m+1, r);
    g(l, m, r);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N >> M;

    v.resize(N);
    for(int i=0; i<N; i++) cin >> v[i];

    u.resize(N);
    f(0, N-1);

    cout << -1 << "\n";
}
