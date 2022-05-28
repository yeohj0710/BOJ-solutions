#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, K; cin >> N >> K;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int i = 0, j = 0, ans = 0;

    while(j < N) {
        if(j != N-1 && v[j+1] != v[j]) j++;
        else {
            j++;
            i = j;
        }

        ans = max(ans, j-i+1);
    }

    cout << ans << "\n";
}
