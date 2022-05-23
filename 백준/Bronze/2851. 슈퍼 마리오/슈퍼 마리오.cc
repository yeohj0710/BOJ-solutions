#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int> v(11);
    for(int i=1; i<=10; i++) {
        int x; cin >> x;

        v[i] = v[i-1] + x;
    }

    int diff = INT_MAX;
    for(int i=1; i<=10; i++) diff = min(diff, abs(v[i] - 100));

    for(int i=10; i>=1; i--)
        if(abs(v[i] - 100) == diff) {
            cout << v[i] << "\n";
            break;
        }
}
