#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int M, N; cin >> M >> N;

    vector<int> v(M+1);

    while(N--) {
        int a, b; cin >> a >> b;

        for(int i=a; i<=b; i++) v[i] = true;
    }

    bool check = true;

    for(int i=1; i<=M; i++)
        if(!v[i]) check = false;

    if(check) cout << "YES\n";
    else cout << "NO\n";
}
