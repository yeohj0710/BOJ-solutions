#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios::sync_with_stdio(0), cin.tie(0);
    
    int N; cin >> N;

    int o = 0, e = 1, s = 0, a = 0;

    while(N--) {
        int x; cin >> x;

        s += x;

        if(s % 2 == 0) a += e++;
        else a += o++;
    }

    cout << a << "\n";
}
