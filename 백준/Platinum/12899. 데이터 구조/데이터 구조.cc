#include <bits/stdc++.h>
#define int long long
using namespace std;

int Max = 2e6;
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

    int N; cin >> N;

    while(N--) {
        int Q, x; cin >> Q >> x;

        if(Q == 1) f(1, 1, Max, x);
        else if(Q == 2) cout << g(1, 1, Max, x) << "\n";
    }
}
