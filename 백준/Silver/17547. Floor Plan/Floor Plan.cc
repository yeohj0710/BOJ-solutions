#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int a = 0, b = 0;

    if(N % 2 == 1) {
        a = (N + 1) / 2;
        b = N - a;
    }
    else if(N % 4 == 0) {
        a = (N / 2 + 2) / 2;
        b = N / 2 - a;
    }

    if(N % 4 == 2 || a < 0 || b < 0) {
        cout << "impossible\n";
        return 0;
    }

    cout << a << " " << b << "\n";
}
