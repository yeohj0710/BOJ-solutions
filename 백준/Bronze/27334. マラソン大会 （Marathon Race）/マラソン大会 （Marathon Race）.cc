#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    for(int i=0; i<N; i++) {
        int cnt = 0;

        for(int j=0; j<N; j++)
            if(v[j] < v[i]) cnt++;

        cout << cnt + 1 << "\n";
    }
}
