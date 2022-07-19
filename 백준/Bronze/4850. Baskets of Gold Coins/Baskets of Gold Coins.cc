#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, w, d, tot;

    while(cin >> N >> w >> d >> tot) {
        int sum = w * N * (N - 1) / 2;

        if(sum - tot > 0) cout << (sum - tot) / d << "\n";
        else cout << N << "\n";
    }
}
