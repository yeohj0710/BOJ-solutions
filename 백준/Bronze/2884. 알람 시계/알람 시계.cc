#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;

    int c = (a * 60) + b - 45;

    if(c < 0) c += 24 * 60;

    cout << c / 60 << " " << c % 60 << "\n";
}
