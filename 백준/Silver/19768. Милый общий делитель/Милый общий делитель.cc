#include <bits/stdc++.h>
#define int long long
using namespace std;

main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;

    int x = __gcd(a, b);

    int ans = 0, Max = 0;

    for(int i=1; i*i<=x; i++) {
        if(x % i != 0) continue;

        int tmp = i, sum = 0;

        while(tmp > 0) {
            sum += tmp % 10;
            tmp /= 10;
        }

        if(sum > Max) {
            Max = sum;
            ans = i;
        }

        tmp = x / i, sum = 0;

        while(tmp > 0) {
            sum += tmp % 10;
            tmp /= 10;
        }

        if(sum > Max) {
            Max = sum;
            ans = x / i;
        }
    }

    cout << ans << "\n";
}
