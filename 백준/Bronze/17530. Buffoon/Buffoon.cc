#include <bits/stdc++.h>
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    int Max = 0;
    for(int i=0; i<N; i++) Max = max(Max, v[i]);

    if(v[0] == Max) cout << "S\n";
    else cout << "N\n";
}
