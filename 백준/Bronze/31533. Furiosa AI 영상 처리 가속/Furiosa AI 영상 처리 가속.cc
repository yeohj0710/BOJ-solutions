#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    double N, a, b; cin >> N >> a >> b;

    if(a < b) a /=  N;
    else b /= N;

    cout << fixed << setprecision(6);

    cout << min({max(a, b), a * 2 , b * 2}) << "\n";
}
