#include <bits/stdc++.h>
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    int sum = 0;

    while(N--) {
        int x; cin >> x;

        sum = sum ^ x;
    }

    if(sum % 2 == 1) cout << "John\n";
    else cout << "Preston\n";
}
