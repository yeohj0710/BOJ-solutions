#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> v(N);
    for(int i=0; i<N; i++) cin >> v[i];

    bool check = false;

    for(int i=2; i<N; i++)
        if(v[i] != v[i-1] && v[i-1] != v[i-2] && v[i-2] != v[i]) check = true;

    if(check) cout << "TAK\n";
    else cout << "NIE\n";
}
