#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int sum = 0;
    for(int i=0; i<N; i++) {
        int x; cin >> x;

        sum += x;
    }

    if(sum % 3 == 0) cout << "yes\n";
    else cout << "no\n";
}
