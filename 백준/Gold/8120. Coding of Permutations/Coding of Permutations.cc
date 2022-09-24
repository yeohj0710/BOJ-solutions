#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, Max = 3e4 + 1;
vector<int> v(Max * 4);

void f(int n, int b, int e, int idx) {
    if(idx < b || e < idx) return;

    v[n]++;

    if(b == e) return;

    f(n*2, b, (b+e)/2, idx);
    f(n*2 + 1, (b+e)/2 + 1, e, idx);
}

int g(int n, int b, int e, int cnt) {
    v[n]--;

    if(b == e) return b;

    if(cnt <= v[n*2]) return g(n*2, b, (b+e)/2, cnt);
    else return g(n*2 + 1, (b+e)/2 + 1, e, cnt - v[n*2]);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    for(int i=1; i<=N; i++) f(1, 1, Max, i);

    vector<int> u(N+1);
    for(int i=1; i<=N; i++) cin >> u[i];

    vector<int> ans(N+1);
    for(int i=N; i>=1; i--) {
        if(u[i] >= v[1]) {
            cout << "NIE\n";
            return 0;
        }

        ans[i] = g(1, 1, Max, v[1] - u[i]);
    }

    for(int i=1; i<=N; i++) cout << ans[i] << "\n";
}
