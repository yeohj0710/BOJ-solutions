#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    char v[8][8];
    for(int i=0; i<8; i++)
        for(int j=0; j<8; j++) cin >> v[i][j];

    int ans = 0;
    for(int i=0; i<8; i++)
        for(int j=0; j<8; j++)
            if((i + j) % 2 == 0 && v[i][j] == 'F') ans++;

    cout << ans << "\n";
}
