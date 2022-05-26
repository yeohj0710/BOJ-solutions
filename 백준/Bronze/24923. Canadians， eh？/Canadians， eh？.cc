#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; getline(cin, str);

    if(str.length() < 3) {
        cout << "Imposter!\n";
        return 0;
    }

    int L = str.length();

    if(str[L-3] == 'e' && str[L-2] == 'h' && str[L-1] == '?') cout << "Canadian!\n";
    else cout << "Imposter!\n";
}
