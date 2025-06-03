#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int a, b; cin >> a >> b;

    string aa = "", bb = "";

    for(int i=0; i<a; i++) aa += "1";
    for(int i=0; i<b; i++) bb += "1";

    cout << stoll(aa) + stoll(bb) << "\n";
}
