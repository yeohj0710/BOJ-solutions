#include <bits/stdc++.h>
#define int long long
using namespace std;

int f(int N) {
    if(N % 4 == 0) return N;
    if(N % 4 == 1) return 1;
    if(N % 4 == 2) return N + 1;
    return 0;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int a, b; cin >> a >> b;

        cout << (f(b) ^ f(a-1)) << "\n";
    }
}
