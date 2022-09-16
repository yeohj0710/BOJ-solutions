#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int cnv[26] = {3, 2, 1, 2, 3, 3, 3, 3, 1, 1, 3, 1, 3, 3, 1, 2, 2, 2, 1, 2, 1, 1, 2, 2, 2, 1};

    string str; cin >> str;

    int sum = 0;

    for(int i=0; i<str.length(); i++) sum += cnv[str[i] - 'A'];

    if(sum % 2 == 1) cout << "I'm a winner!\n";
    else cout << "You're the winner?\n";
}
