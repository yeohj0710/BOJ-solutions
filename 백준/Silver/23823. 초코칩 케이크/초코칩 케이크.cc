#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<int> v(N+1), u(N+1);
    int vm = 0, um = 0, vcnt = N, ucnt = N;

    while(M--) {
        int Q, x; cin >> Q >> x;

        if(Q == 1) {
            v[x]++;

            if(v[x] > vm) {
                vm = v[x];
                vcnt = 1;
            }
            else if(v[x] == vm) vcnt++;
        }
        else if(Q == 2) {
            u[x]++;

            if(u[x] > um) {
                um = u[x];
                ucnt = 1;
            }
            else if(u[x] == um) ucnt++;
        }

        cout << vcnt * ucnt << "\n";
    }
}
