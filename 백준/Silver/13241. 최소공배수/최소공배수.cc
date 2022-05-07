#include <bits/stdc++.h>
using namespace std;

main() {
    long long a, b; cin >> a >> b;
    cout << a * b / __gcd(a, b);
}
