#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, a, b; cin >> N >> a >> b;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end(), greater<int>());

    int ans = 0, sum = 0;

    for(int i=0; i<N; i++) {
        sum += v[i];

        if(sum >= a * b) {
            cout << i + 1 << "\n";
            break;
        }
    }
}
