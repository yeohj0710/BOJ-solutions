#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c, d; cin >> a >> b >> c >> d;

    int sum = min(a, b) + min(c, d);

    for(int i=1; ; i++) {
        if(i*i > sum) {
            cout << i-1 << "\n";
            break;
        }
    }
}
