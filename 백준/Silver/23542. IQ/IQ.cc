#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N*2);
    for(int i=0; i<N*2; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int Min = INT_MAX, Max = INT_MIN;

    for(int i=0; i<N*2; i++) {
        int sum = v[i] + v[N*2 - 1 - i];

        Min = min(Min, sum);
        Max = max(Max, sum);
    }

    cout << Max - Min << "\n";
}
