#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N), u(N), vs(N), us(N);
    for(int i=0; i<N; i++) {
        int a, b; cin >> a >> b;

        v[i] = vs[i] = a - b;
        u[i] = us[i] = a + b;
    }

    sort(vs.begin(), vs.end());
    sort(us.begin(), us.end());

    for(int i=0; i<N; i++) {
        cout << lower_bound(us.begin(), us.end(), v[i]) + 1 - us.begin() << " ";
        cout << upper_bound(vs.begin(), vs.end(), u[i]) - vs.begin() << "\n";
    }
}
