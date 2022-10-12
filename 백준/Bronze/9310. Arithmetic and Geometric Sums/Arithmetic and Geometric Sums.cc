#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        int a, b, c; cin >> a >> b >> c;

        if(b - a == c - b)
            cout << N * (a * 2 + (N - 1) * (b - a)) / 2 << "\n";
        else
            cout << a * ((int)pow(b/a, N) - 1) / (b/a - 1) << "\n";
    }
}
