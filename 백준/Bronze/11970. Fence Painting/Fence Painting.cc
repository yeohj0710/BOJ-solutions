#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<bool> check(100, false);

    int a, b, c, d; cin >> a >> b >> c >> d;

    for(int i=a; i<b; i++) check[i] = true;
    for(int i=c; i<d; i++) check[i] = true;

    int ans = 0;
    for(int i=0; i<100; i++)
        if(check[i]) ans++;

    cout << ans << "\n";
}
