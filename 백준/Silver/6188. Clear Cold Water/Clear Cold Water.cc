#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v;

int f(int x, int cnt) {
    if(x == 1) return cnt + 1;
    else return f(v[x], cnt + 1);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    v.resize(N+1);

    while(M--) {
        int a, b, c; cin >> a >> b >> c;
        v[b] = v[c] = a;
    }

    for(int i=1; i<=N; i++) cout << f(i, 0) << "\n";
}
