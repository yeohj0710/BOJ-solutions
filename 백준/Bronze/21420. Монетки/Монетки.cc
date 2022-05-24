#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int a = 0, b = 0;

    while(N--) {
        int x; cin >> x;

        if(x == 0) a++;
        else b++;
    }

    cout << min(a, b) << "\n";
}
