#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a, b; cin >> a >> b;

    int x = (a.length() - 1) / 3;
    int y = (b.length() - 1) / 3;

    for(int i=0; i<x*y; i++) cout << "S(";
    cout << "0";
    for(int i=0; i<x*y; i++) cout << ")";
    cout << "\n";
}
