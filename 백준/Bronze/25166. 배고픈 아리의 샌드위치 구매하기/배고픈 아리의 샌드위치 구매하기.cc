#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;

    if(a <= 1023) {
        cout << "No thanks\n";
        return 0;
    }

    if(a - 1023 == b) cout << "Thanks\n";
    else cout << "Impossible\n";
}
