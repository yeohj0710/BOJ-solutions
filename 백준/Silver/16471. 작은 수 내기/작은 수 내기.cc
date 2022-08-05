#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N), u(N);

    for(int i=0; i<N; i++) cin >> v[i];
    for(int i=0; i<N; i++) cin >> u[i];

    sort(v.begin(), v.end());
    sort(u.begin(), u.end());

    int i = 0, j = 0, cnt = 0;

    while(i < N && j < N) {
        if(v[i] < u[j]) {
            cnt++;
            i++, j++;
        }
        else j++;
    }

    if(cnt >= (N+1)/2) cout << "YES\n";
    else cout << "NO\n";
}
