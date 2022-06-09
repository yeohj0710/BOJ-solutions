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

    bool check = false;
    for(int i=0; i<N-2; i++)
        if(v[i] + v[i+1] > v[i+2]) check = true;

    if(check) cout << "possible\n";
    else cout << "impossible\n";
}
