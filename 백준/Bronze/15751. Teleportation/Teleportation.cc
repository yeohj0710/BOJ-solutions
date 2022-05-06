#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, x, y; cin >> a >> b >> x >> y;

    if(a > b) swap(a, b);
    if(x > y) swap(x, y);

    cout << min(abs(a-x) + abs(b-y), b-a) << "\n";
}
