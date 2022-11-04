#include <bits/stdc++.h>
#define int long long
using namespace std;

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int k, a, b; cin >> k >> a >> b;

    if(a <= 0 && b >= 0) {
        a = -a;

        cout << a/k + b/k + 1 << "\n";

        return 0;
    }

    if(a <= 0 && b <= 0) {
        int tmp = a;

        a = -b;
        b = -tmp;
    }

    cout << b/k - (a-1)/k << "\n";
}
