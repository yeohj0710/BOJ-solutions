#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(5);

    int N, M; cin >> N >> M;

    double sum = 0;

    for(int i=0; i<M; i++) {
        double x; cin >> x;

        sum += x;
    }

    cout << (sum + -3.0 * (N - M))/N << " " << (sum + 3.0 * (N - M))/N << "\n";
}
