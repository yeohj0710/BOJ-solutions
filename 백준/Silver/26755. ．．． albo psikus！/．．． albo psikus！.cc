#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
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
