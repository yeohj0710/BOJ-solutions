#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;

    if(b - a <= 0) cout << "Congratulations, you are within the speed limit!\n";
    else if(b - a > 0 && b - a <= 20) cout << "You are speeding and your fine is $100.\n";
    else if(b - a > 20 && b - a <= 30) cout << "You are speeding and your fine is $270.\n";
    else if(b - a > 30) cout << "You are speeding and your fine is $500.\n";
}
