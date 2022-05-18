#include <bits/stdc++.h>
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int ans = 1;
    for(int i=1; i<=N; i++) ans *= i;

    cout << ans << "\n";
}
