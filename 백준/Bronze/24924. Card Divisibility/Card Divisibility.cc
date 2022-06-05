#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;

    b = a + (b - a) % 9;

    int sum = 0;
    for(int i=a; i<=b; i++) {
        int temp = i;
        while(temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
    }

    cout << sum % 9 << "\n";
}
