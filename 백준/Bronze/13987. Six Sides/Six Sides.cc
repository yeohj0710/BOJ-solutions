#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(5);

    int u[6], v[6];

    for(int i=0; i<6; i++) cin >> u[i];
    for(int i=0; i<6; i++) cin >> v[i];

    int a = 0, b = 0;
    for(int i=0; i<6; i++)
        for(int j=0; j<6; j++) {
            if(u[i] > v[j]) a++;
            if(u[i] != v[j]) b++;
        }

    if(b != 0) cout << (double(a))/b << "\n";
    else cout << "0.00000\n";
}
