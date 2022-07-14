#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int sum = 0;
    for(int i=0; i<4; i++) {
        int x; cin >> x;
        sum += x;
    }

    cout << sum / 60 << "\n" << sum % 60 << "\n";
}
