#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t; cin >> t;

    while(t--) {
        int a, b; cin >> a >> b;

        if(b % a == 0) cout << "TAK\n";
        else cout << "NIE\n";
    }
}
