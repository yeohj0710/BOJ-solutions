#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> v;

int f(int x) {
    if(v[x] == x) return x;
    else return v[x] = f(v[x]);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    v.resize(N+1);
    for(int i=1; i<=N; i++) v[i] = i;

    for(int i=0; i<N-2; i++) {
        int a, b; cin >> a >> b;

        v[f(a)] = f(b);
    }

    for(int i=2; i<=N; i++)
        if(f(1) != f(i)) {
            cout << 1 << " " << i << "\n";
            break;
        }
}
