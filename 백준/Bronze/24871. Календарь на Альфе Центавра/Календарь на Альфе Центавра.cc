#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int d, m, w; cin >> d >> m >> w;
    int i, j, k; cin >> i >> j >> k;

    cout << (char)(((k-1)*m*d + (j-1)*d + (i-1)) % w + 'a') << "\n";
}
