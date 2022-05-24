#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, N; cin >> a >> b >> N;

    vector<int> v(N+2);
    v[N+1] = b;

    for(int i=1; i<=N; i++) cin >> v[i];

    bool check = false;
    for(int i=1; i<=N+1; i++)
        if(v[i] - v[i-1] >= a) check = true;

    if(check) cout << "Y\n";
    else cout << "N\n";
}
