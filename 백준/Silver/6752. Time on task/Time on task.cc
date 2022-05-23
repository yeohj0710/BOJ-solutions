#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int time, N; cin >> time >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int sum = 0;
    for(int i=0; i<N; i++) {
        sum += v[i];

        if(sum > time) {
            cout << i << "\n";
            break;
        }
    }
}
