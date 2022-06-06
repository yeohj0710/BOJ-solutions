#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<bool> v(10001);

    while(N--) {
        int a, b; cin >> a >> b;
        for(int i=a; i<b; i++) v[i] = true;
    }

    int ans = 0;
    for(int i=0; i<=10000; i++)
        if(v[i]) ans++;

    cout << ans << "\n";
}
