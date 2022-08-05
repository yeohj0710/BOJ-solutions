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

        if(x % 2 == 0) a++;
        else b++;
    }

    while(a < b) {
        b -= 2;
        a++;
    }

    if(a > b) cout << b*2 + 1 << "\n";
    else if(a == b) cout << a*2 << "\n";
}
