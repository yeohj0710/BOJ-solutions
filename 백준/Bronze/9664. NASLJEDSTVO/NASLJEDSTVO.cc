#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    int Min = INT_MAX, Max = INT_MIN;

    for(int i=1; i<=1e3; i++) {
        if(i - i/N == M) {
            Min = min(Min, i);
            Max = max(Max, i);
        }
    }

    cout << Min << " " << Max << "\n";
}
