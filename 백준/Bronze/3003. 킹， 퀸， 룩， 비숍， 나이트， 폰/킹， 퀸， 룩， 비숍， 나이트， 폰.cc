#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int v[6] = {};
    int u[6] = {1, 1, 2, 2, 2, 8};

    for(int i=0; i<6; i++) cin >> v[i];

    for(int i=0; i<6; i++) cout << u[i] - v[i] << " ";
    cout << "\n";
}
