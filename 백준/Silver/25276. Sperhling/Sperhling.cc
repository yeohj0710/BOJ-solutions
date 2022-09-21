#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a, b; cin >> a >> b;

    for(int i=0; i<min(a.length(), b.length()); i++) {
        if(a[i] != b[i]) {
            cout << (a.length() - i) + (b.length() - i) << "\n";
            return 0;
        }
    }

    cout << max(a.length(), b.length()) - min(a.length(), b.length()) << "\n";
}
