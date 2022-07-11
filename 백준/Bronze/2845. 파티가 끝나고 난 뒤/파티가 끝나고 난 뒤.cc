#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;

    for(int i=0; i<5; i++) {
        int x; cin >> x;

        cout << x - a*b << " ";
    }
    cout << "\n";
}
