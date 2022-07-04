#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N+1);
    for(int i=1; i<=N; i++) {
        int x; cin >> x;
        v[x] = i;
    }

    for(int i=1; i<=N; i++) cout << v[i] << "\n";
}
