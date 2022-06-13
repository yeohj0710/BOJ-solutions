#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    int sum = 0;

    for(int i=0; i<N; i++) {
        cin >> v[i];
        sum += v[i];
    }

    sort(v.begin(), v.end());

    if(N == 1) cout << 0 << "\n";
    else cout << sum + (N-2) * v[0] << "\n";
}
