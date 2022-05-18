#include <bits/stdc++.h>
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int sum = 0;
    for(int i=0; i<str.length(); i++) sum += str[i] - '0';

    cout << sum % 3 << "\n";
}
