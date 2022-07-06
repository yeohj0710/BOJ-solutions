#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    if(next_permutation(v.begin(), v.end())) {
        for(int i=0; i<N; i++) cout << v[i] << " ";
        cout << "\n";
    }
    else cout << -1 << "\n";
}
