#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int sum = 0;

    while(true) {
        string str; getline(cin, str);
        if(str == "TOTAL") break;

        int a, b; cin >> a >> b;
        cin.ignore();

        sum += a * b;
    }

    int x; cin >> x;

    if(x <= sum) cout << "PAY\n";
    else cout << "PROTEST\n";
}
