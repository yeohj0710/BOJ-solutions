#include <bits/stdc++.h>
#define int long long
using namespace std;

int Max = 1e2 + 1;
vector<int> v;

void f(int n, int b, int e, int idx) {
    if(idx < b || e < idx) return;

    v[n]++;

    if(b == e) return;

    f(n*2, b, (b+e)/2, idx);
    f(n*2 + 1, (b+e)/2 + 1, e, idx);
}

void g(int n, int b, int e, int idx) {
    if(idx < b || e < idx) return;

    v[n]--;

    if(b == e) return;

    g(n*2, b, (b+e)/2, idx);
    g(n*2 + 1, (b+e)/2 + 1, e, idx);
}

int h(int n, int b, int e, int cnt) {
    if(b == e) return b;

    if(cnt <= v[n*2]) return h(n*2, b, (b+e)/2, cnt);
    else return h(n*2 + 1, (b+e)/2 + 1, e, cnt - v[n*2]);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        v.clear();
        v.resize(Max*4);

        int N, M; cin >> N >> M;

        for(int i=1; i<=N; i++) f(1, 1, Max, i);

        while(M--) {
            char Q; cin >> Q;
            int x; cin >> x;

            if(Q == '-') {
                g(1, 1, Max, x);
                g(1, 1, Max, N-x+1);
            }
            else if(Q == '?') cout << h(1, 1, Max, x) << "\n";
        }
    }
}
