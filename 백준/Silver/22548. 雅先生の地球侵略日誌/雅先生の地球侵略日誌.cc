#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int x = 1;

    for(int i=1; ; i++) {
        x *= 3;

        if(x >= N) {
            cout << i << "\n";
            break;
        }
    }
}
