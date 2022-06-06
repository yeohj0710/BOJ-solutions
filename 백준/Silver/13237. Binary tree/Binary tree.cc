#include <bits/stdc++.h>
#define int long long
using namespace std;

int N, M;
vector<int> v;

void f(int x, int cnt) {
    if(v[x] == -1) {
        cout << cnt << "\n";
        return;
    }

    f(v[x], cnt + 1);
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cin >> N;

    v.resize(N+1);
    for(int i=1; i<=N; i++) cin >> v[i];

    for(int i=1; i<=N; i++) f(i, 0);
}
