#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c; cin >> a >> b >> c;
    int x; cin >> x;

    int sum = a*60*60 + b*60 + c + x;

    if(sum >= 24*60*60) sum %= 24*60*60;

    cout << sum / 3600 << " " << (sum % 3600) / 60 << " " << sum % 60 << "\n";
}
