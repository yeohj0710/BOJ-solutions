#include <bits/stdc++.h>
#define int long long
using namespace std;

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int R, r; cin >> R >> r;

    int ans = R*R - 2*R*r;

    cout << ans << "\n";
}
