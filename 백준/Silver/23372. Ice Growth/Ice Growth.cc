#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    int sum = 0;
    vector<int> v(N);

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        sum = max(sum - x, (int)0);
        v[i] = sum;
    }

    sort(v.begin(), v.end());

    while(M--) {
        int x; cin >> x;

        cout << v.end() - lower_bound(v.begin(), v.end(), x*5) << " ";
    }
    cout << "\n";
}
