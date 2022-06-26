#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int i = 0, j = N-1, ans = INT_MAX;
    while(i < j) {
        if(abs(v[i] + v[j]) < abs(ans)) ans = v[i] + v[j];

        if(v[i] + v[j] < 0) i++;
        else j--;
    }

    cout << ans << "\n";
}
