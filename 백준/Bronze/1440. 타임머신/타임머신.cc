#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int> v(3);

    char c;

    cin >> v[0] >> c >> v[1] >> c >> v[2];

    vector<int> u(3);
    u[0] = 0, u[1] = 1, u[2] = 2;

    int ans = 0;

    while(true) {
        if(v[u[0]] >= 1 && v[u[0]] <= 12 && v[u[1]] >= 0 && v[u[1]] <= 59 && v[u[2]] >= 0 && v[u[2]] <= 59) ans++;

        if(!next_permutation(u.begin(), u.end())) break;
   }

    cout << ans << "\n";
}
