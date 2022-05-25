#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string v[4];
    for(int i=0; i<4; i++) cin >> v[i];

    int ans = 0;

    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++)
            for(int k=0; k<4; k++)
                for(int l=0; l<4; l++) {
                    if(i == j || i == k || i == l || j == k || j == l || k == l) continue;

                    int temp = stoll(v[i] + v[j] + v[k] + v[l]);

                    ans = max(ans, temp);
                }

    cout << ans << "\n";
}
