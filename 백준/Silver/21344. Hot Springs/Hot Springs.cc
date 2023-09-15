#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N);

    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int cur = (N - 1) / 2, x = 1;

    for(int i=0; i<N; i++) {
        cout << v[cur] << " ";

        if(i % 2 == 0) cur += x;
        else cur -= x;

        x++;
    }
    cout << "\n";
}
