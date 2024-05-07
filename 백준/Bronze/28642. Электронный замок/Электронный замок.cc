#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int x; cin >> x;

    if(x % 2 == 1) {
        cout << "7";

        x -= 3;
    }

    for(int i=0; i<x/2; i++) cout << "1";
    cout << "\n";
}
