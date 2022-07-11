#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int x; cin >> x;

    int N; cin >> N;

    int sum = 0;

    while(N--) {
        int a, b; cin >> a >> b;
        sum += a*b;
    }

    if(sum == x) cout << "Yes\n";
    else cout << "No\n";
}
