#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    if(N == 1) {
        cout << 0 << "\n";
        return 0;
    }
    else if(N == 2) {
        cout << 2 << "\n";
        return 0;
    }
    else if(N == 3) {
        cout << 3 << "\n";
        return 0;
    }

    int a = 1, b = 2;
    for(int i=4; i<=N; i++) {
        int c = b;
        int d = (a + b) % 10;

        a = c, b = d;
    }

    cout << (a + b) % 10 << "\n";
}
