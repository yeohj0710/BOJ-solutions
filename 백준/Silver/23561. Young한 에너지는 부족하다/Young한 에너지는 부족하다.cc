#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N*3);
    for(int i=0; i<N*3; i++) cin >> v[i];

    sort(v.begin(), v.end());

    cout << v[N*2 - 1] - v[N] << "\n";
}
