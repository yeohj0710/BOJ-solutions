#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;
    int c = a+b, d = a-b;

    if(c > d) cout << c << "\n" << d;
    else cout << d << "\n" << c;
}
