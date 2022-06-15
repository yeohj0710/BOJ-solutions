#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;

    int x = __gcd(a, b);

    for(int i=0; i<x; i++) cout << 1;
    cout << "\n";
}
