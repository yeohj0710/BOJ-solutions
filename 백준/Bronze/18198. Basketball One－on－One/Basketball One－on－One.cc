#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    if(str[str.length()-2] == 'A') cout << "A\n";
    else cout << "B\n";
}
