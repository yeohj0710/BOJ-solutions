#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int sum = 0;

    for(int i=0; i<N; i++) {
        if(v[i] > sum + 1) {
            cout << sum + 1 << "\n";
            return 0;
        }
        sum += v[i];
    }

    cout << sum + 1 << "\n";
}
