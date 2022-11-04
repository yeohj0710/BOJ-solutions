#include <bits/stdc++.h>
#define int long long
using namespace std;

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int> fac;

    fac.push_back(1);

    int x = 1;

    for(int i=1; ; i++) {
        x *= i;

        if(x > 1e18) break;

        fac.push_back(x);
    }

    int N; cin >> N;

    if(N == 0) {
        cout << "NO\n";
        return 0;
    }

    for(int i=fac.size()-1; i>=0; i--)
        if(fac[i] <= N) N -= fac[i];

    if(N == 0) cout << "YES\n";
    else cout << "NO\n";
}
