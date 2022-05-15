#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> u(N), v(N);
    for(int i=0; i<N; i++) cin >> u[i];
    for(int i=0; i<N; i++) cin >> v[i];

    sort(u.begin(), u.end());
    sort(v.begin(), v.end());

    bool check = true;
    for(int i=0; i<N; i++)
        if(u[i] > v[i]) check = false;

    if(check) cout << "DA\n";
    else cout << "NE\n";
}
