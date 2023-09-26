#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(N+1);

    while(M--) {
        int a, b, c; cin >> a >> b >> c;

        if(a == 1) v[b] += c;
        else {
            int sum = 0;

            for(int i=b; i<=c; i++) sum += v[i];

            cout << sum << "\n";
        }
    }
}

