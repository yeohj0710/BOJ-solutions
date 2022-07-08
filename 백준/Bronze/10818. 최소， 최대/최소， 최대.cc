#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int Min = INT_MAX, Max = INT_MIN;

    while(N--) {
        int x; cin >> x;

        Min = min(Min, x);
        Max = max(Max, x);
    }

    cout << Min << " " << Max << "\n";
}
