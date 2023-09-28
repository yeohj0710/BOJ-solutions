#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int sum = 0;

    while(N--) {
        int x; cin >> x;

        sum += x;
    }

    if(sum > 0) cout << "Right\n";
    else if(sum < 0) cout << "Left\n";
    else cout << "Stay\n";
}
