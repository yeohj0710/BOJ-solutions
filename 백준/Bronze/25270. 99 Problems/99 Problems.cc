#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    for(int i=0; ; i++) {
        if((N + i) % 100 == 99) {
            cout << N + i << "\n";
            break;
        }
        if((N - i) > 0 && (N - i) % 100 == 99) {
            cout << N - i << "\n";
            break;
        }
    }
}
