#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string a, b; cin >> a >> b;

    int ans = 0;
    for(int i=0; i<N; i++)
        if(a[i] == b[i]) ans++;

    cout << ans << "\n";
}
