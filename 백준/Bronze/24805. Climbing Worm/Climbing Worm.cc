#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, N; cin >> a >> b >> N;

    int sum = 0;

    for(int i=1; ; i++) {
        sum += a;

        if(sum >= N) {
            cout << i << "\n";
            break;
        }

        sum -= b;
    }
}
