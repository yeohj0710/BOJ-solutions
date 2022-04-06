#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n; cin >> n;
    if(n >= 199) cout << "0";
    else cout << 199 - n;
}
