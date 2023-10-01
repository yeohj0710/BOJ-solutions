#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b; cin >> a >> b;

    int c = a * 12 + b;

    int sum = 0;

    if(c <= 12) sum += c * 15;
    else if(c <= 24) sum += 12 * 15 + (c - 12) * 9;
    else sum += 12 * 15 + 12 * 9 + (c - 24) * 4;

    cout << sum / 12 << " " << sum % 12 << "\n";
}
