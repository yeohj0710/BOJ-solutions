#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    for(int i=100; i>=0; i--) {
        if(N - i*7*52 > 0 && (N - i*7*52) % (21*52) == 0) {
            cout << i << "\n";
            cout << (N - i*7*52) / (21*52) << "\n";
            break;
        }
    }
}
