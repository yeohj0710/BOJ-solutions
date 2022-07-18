#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int i = 0, j = N-1, ans = INT_MIN;

    while(i < j) {
        int x = (j-i-1) * min(v[i], v[j]);
        ans = max(ans, x);

        if(v[i] < v[j]) i++;
        else j--;
    }

    cout << ans << "\n";
}
