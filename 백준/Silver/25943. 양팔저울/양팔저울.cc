#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int a = 0, b = 0;

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        if(a <= b) a += x;
        else b += x;
    }

    int dif = abs(a - b), ans = 0;

    int v[7] = {100, 50, 20, 10, 5, 2, 1};

    for(int i=0; i<7; i++) {
        ans += dif / v[i];
        dif %= v[i];
    }

    cout << ans << "\n";
}
