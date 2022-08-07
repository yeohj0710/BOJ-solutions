#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int a = v[0], b = v[N-1];

    a--, b--;

    if(a < b) swap(a, b);

    int x = N - 3;

    if(a - b >= x) {
        cout << a - x << "\n";
        return 0;
    }

    x -= a - b;
    a = b;

    cout << a - x/2 << "\n";
}
