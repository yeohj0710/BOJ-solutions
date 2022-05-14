#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int sum = 0;

    int coef[7] = {2, 7, 6, 5, 4, 3, 2};
    for(int i=0; i<7; i++) sum += (str[i] - '0') * coef[i];

    string ans = "JABCDEFGHIZ";
    cout << ans[sum % 11] << "\n";
}
