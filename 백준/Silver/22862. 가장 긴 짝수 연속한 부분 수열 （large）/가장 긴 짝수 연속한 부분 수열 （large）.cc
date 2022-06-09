#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    vector<bool> v(N);
    for(int i=0; i<N; i++) {
        int x; cin >> x;
        if(x % 2 == 0) v[i] = true;
        else v[i] = false;
    }

    vector<int> u(N+1);
    for(int i=0; i<N; i++) {
        if(v[i]) u[i+1] = u[i] + 1;
        else u[i+1] = u[i];
    }

    int i = 0, j = 1, ans = 0;
    while(j <= N) {
        if(u[j] - u[i] + M >= j - i) {
            ans = max(ans, u[j] - u[i]);
            j++;
        }
        else {
            i++;
            if(i > j) j = i;
        }
    }

    cout << ans << "\n";
}
