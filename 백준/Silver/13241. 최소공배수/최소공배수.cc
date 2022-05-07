#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    long long a, b; cin >> a >> b;

    long long x = a, y = b;
    if(x < y) swap(x, y);

    while(y != 0) {
        long long temp = x % y;
        x = y;
        y = temp;
    }
    long long gcd = x;

    cout << (a/gcd) * (b/gcd) * gcd << "\n";
}
