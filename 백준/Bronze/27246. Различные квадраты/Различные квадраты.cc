#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int x; cin >> x;

    int sum = 0;

    for(int i=1; ; i++) {
        if(sum + i*i > x) {
            cout << i-1 << "\n";
            break;
        }

        sum += i*i;
    }
}
