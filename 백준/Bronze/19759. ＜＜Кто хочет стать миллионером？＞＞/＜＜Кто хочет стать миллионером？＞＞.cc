#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int ans[26] = {0, 100, 200, 400, 800,
                   1600, 3200, 6400, 13000, 26000,
                   52000, 104000, 208000, 416000, 832000,
                   1670000, 3340000, 6680000, 13360000, 26720000,
                   53440000, 106900000, 213800000, 427600000, 855200000,
                   1710400000};

    int N; cin >> N;

    for(int i=1; i<=N; i++) cout << ans[i] << "\n";
}
