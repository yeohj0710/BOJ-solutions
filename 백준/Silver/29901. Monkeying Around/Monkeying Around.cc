#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N, M; cin >> N >> M;

    vector<int> v(N);

    for(int i=0; i<N; i++) {
        vector<int> u(M);

        int sum = 0;

        for(int j=0; j<M; j++) {
            cin >> u[j];

            sum += u[j];
        }

        for(int j=0; j<M; j++)
            if(u[j] == 0) u[j] = -sum;

        sum = 0;

        for(int j=0; j<M; j++) {
            sum += u[j];
            v[i] += sum;
        }
    }

    int idx = 0, mx = INT_MIN;

    for(int i=0; i<N; i++) {
        if(v[i] > mx) {
            mx = v[i];
            idx = i;
        }
    }

    cout << idx + 1 << "\n";
}
