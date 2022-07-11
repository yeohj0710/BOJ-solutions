#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int i=0; i<2; i++) {
        int v[5];
        for(int j=0; j<5; j++) cin >> v[j];

        int u[5] = {6, 3, 2, 1, 2};

        int sum = 0;
        for(int j=0; j<5; j++) sum += v[j]*u[j];

        cout << sum << " ";
    }

    cout << "\n";
}
