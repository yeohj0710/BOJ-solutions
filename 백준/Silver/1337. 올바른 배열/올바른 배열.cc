#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int ans = 4;

    for(int i=0; i<N-1; i++)
        if(v[i+1] - v[i] < 5) ans = 3;

    for(int i=0; i<N-2; i++)
        if(v[i+2] - v[i] < 5) ans = 2;

    for(int i=0; i<N-3; i++)
        if(v[i+3] - v[i] < 5) ans = 1;

    for(int i=0; i<N-4; i++)
        if(v[i+4] - v[i] < 5) ans = 0;

    cout << ans << "\n";
}
