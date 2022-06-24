#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N), u(N);
    for(int i=0; i<N; i++) {
        cin >> v[i];
        u[i] = v[i];
    }

    sort(u.begin(), u.end());
    u.erase(unique(u.begin(), u.end()), u.end());

    vector<int> w(N);
    for(int i=0; i<v.size(); i++)
        w[i] = lower_bound(u.begin(), u.end(), v[i]) - u.begin();

    for(int i=0; i<N; i++) cout << w[i] << " ";
}
