#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int a = 0, b = 0;

    for(int i=2; i<str.length(); i++) {
        if(str[i-2] == 'J' && str[i-1] == 'O' && str[i] == 'I') a++;
        if(str[i-2] == 'I' && str[i-1] == 'O' && str[i] == 'I') b++;
    }

    cout << a << "\n" << b << "\n";
}
