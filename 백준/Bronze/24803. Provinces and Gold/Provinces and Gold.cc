#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c; cin >> a >> b >> c;

    int sum = a*3 + b*2 + c;

    if(sum >= 8) cout << "Province or ";
    else if(sum >= 5) cout << "Duchy or ";
    else if(sum >= 2) cout << "Estate or ";

    if(sum >= 6) cout << "Gold\n";
    else if(sum >= 3) cout << "Silver\n";
    else cout << "Copper\n";
}
