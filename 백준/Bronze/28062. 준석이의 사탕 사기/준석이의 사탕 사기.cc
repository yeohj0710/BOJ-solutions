#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N);
    int sum = 0;

    for(int i=0; i<N; i++) {
        cin >> v[i];
        sum += v[i];
    }

    if(sum % 2 == 0) {
        cout << sum << "\n";
        return 0;
    }

    sort(v.begin(), v.end());

    for(int i=0; i<N; i++) {
        if((sum - v[i]) % 2 == 0) {
            cout << sum - v[i] << "\n";
            break;
        }
    }
}
