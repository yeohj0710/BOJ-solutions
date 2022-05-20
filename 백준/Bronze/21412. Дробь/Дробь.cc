#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int a;
    if(N % 2 == 0) a = N/2 - 1;
    else a = N/2;

    for(int i=a; i>0; i--) {
        int j = N - i;

        if(__gcd(i, j) == 1) {
            cout << i << " " << j << "\n";
            break;
        }
    }
}
