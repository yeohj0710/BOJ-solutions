#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int Max = 0;
    vector<int> a(N), b(N);

    for(int i=0; i<N; i++) {
        Max = max(Max, v[i]);
        a[i] = Max;
    }

    Max = 0;

    for(int i=N-1; i>=0; i--) {
        Max = max(Max, v[i]);
        b[i] = Max;
    }

    for(int i=0; i<N; i++) cout << a[i] << " " << b[i] << "\n";
}
