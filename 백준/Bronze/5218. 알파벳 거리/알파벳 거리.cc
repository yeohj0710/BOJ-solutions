#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string a, b; cin >> a >> b;

        cout << "Distances: ";

        for(int i=0; i<a.length(); i++) {
            if(b[i] >= a[i]) cout << b[i] - a[i] << " ";
            else cout << b[i] - a[i] + 26 << " ";
        }

        cout << "\n";
    }
}
