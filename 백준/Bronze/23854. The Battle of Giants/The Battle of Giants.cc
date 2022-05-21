#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;

    if(a % 3 != b % 3) cout << -1 << "\n";
    else cout << a/3 << " " << a%3 << " " << b/3 << "\n";
}
