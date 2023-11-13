#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(N+1), u(N+1);

    while(M--) {
        int a, b; char ch; cin >> a >> ch >> b;

        if(ch == 'P') {
            if(b == 1) v[a] = 1;
            else v[a] = -1;
        }
        else {
            if(b == 0) u[a] = 1;
            else u[a] = -1;
        }
    }

    int x = 0, y = 0;

    for(int i=1; i<=N; i++) {
        if(v[i] == 1 && u[i] == 1) x++;
        else if(v[i] == -1 || u[i] == -1) y++;
    }

    cout << x << " " << N - y << "\n";
}
