#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    int sum = 0;
    for(int i=1; ; i++) {
        sum += M;
        if(sum >= N) {
            cout << i << "\n";
            break;
        }
        M /= 2;
        if(M == 0) {
            cout << i + (N - sum) << "\n";
            break;
        }
    }
}
