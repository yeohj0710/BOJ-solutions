#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string a, b; cin >> a >> b;

    vector<int> v(N);
    for(int i=0; i<N; i++) {
        if(a[i] != b[i]) v[i] = 1;
        else v[i] = 0;
    }

    int ans = 0;
    for(int i=1; i<N; i++)
        if(v[i-1] == 1 && v[i] == 0) ans++;

    if(v[N-1] == 1) ans++;

    cout << ans << "\n";
}
