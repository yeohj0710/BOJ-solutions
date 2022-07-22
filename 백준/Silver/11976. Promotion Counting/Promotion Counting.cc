#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int v[4][2];
    for(int i=0; i<4; i++)
        for(int j=0; j<2; j++) cin >> v[i][j];

    int a = (v[1][1] - v[1][0]) + (v[2][1] - v[2][0]) + (v[3][1] - v[3][0]);
    int b = (v[2][1] - v[2][0]) + (v[3][1] - v[3][0]);
    int c = (v[3][1] - v[3][0]);

    cout << a << "\n" << b << "\n" << c << "\n";
}
