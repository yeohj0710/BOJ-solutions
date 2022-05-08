#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c; cin >> a >> b >> c;

    int temp = abs(a) + abs(b);

    if(c >= temp && (c - temp) % 2 == 0) cout << "YES\n";
    else cout << "NO\n";
}
