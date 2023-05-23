#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    int a = 0, b = 0, c = 0;

    for(int i=0; i<N; i++) {
        int x; cin >> x;

        if(x == 1) a++;
        else if(x == -1) b++;
        else c++;
    }

    if(c*2 >= N) cout << "INVALID\n";
    else cout << (a > b ? "APPROVED" : "REJECTED") << "\n";
}
