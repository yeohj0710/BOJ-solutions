#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int s, a, b; cin >> s >> a >> b;

    s -= a;
    if(s <= 0) cout << 250;
    else cout << 250 + ((s-1)/b + 1)*100;
}
