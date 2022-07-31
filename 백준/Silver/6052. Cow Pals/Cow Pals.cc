#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int x; cin >> x;

    for(int i=x; ; i++) {
        int sum = 0;

        for(int j=1; j*j<=i; j++) {
            if(i % j == 0) {
                if(j * j == i) sum += j;
                else sum += j + i / j;
            }
        }

        sum -= i;

        if(i == sum) continue;

        int sum2 = 0;

        for(int j=1; j*j<=sum; j++) {
            if(sum % j == 0) {
                if(j * j == sum) sum2 += j;
                else sum2 += j + sum / j;
            }
        }

        sum2 -= sum;

        if(sum2 == i) {
            cout << i << " " << sum << "\n";
            break;
        }
    }
}
