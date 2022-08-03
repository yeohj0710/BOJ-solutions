#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a, b; cin >> a >> b;

    int x = a.length() * b.length() / __gcd(a.length(), b.length());

    string aa = "", bb = "";

    for(int i=0; i<x/a.length(); i++) aa += a;
    for(int i=0; i<x/b.length(); i++) bb += b;

    if(aa == bb) cout << 1 << "\n";
    else cout << 0 << "\n";
}
