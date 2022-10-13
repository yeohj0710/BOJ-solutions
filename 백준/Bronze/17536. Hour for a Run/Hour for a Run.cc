#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    double a, b; cin >> a >> b;

    for(int i=1; i<10; i++)
        cout << (int)ceil(a * b / 10 * i) << " ";
    cout << "\n";
}
