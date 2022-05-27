#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    int cnt = 0;

    for(int i=0; i<N; i++) {
        cin >> v[i];
        if(v[i] < 0) cnt++;
    }

    cout << cnt * (N-1) << "\n";
}
