#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, a, b; cin >> N >> a >> b;
    cin.ignore();

    string str; getline(cin, str);

    int mul = 1;

    while(b > 0) {
        if(b % 2 == 1) mul = (mul * a) % 26;

        a = (a * a) % 26;
        b /= 2;
    }

    for(int i=0; i<str.length(); i++) {
        if(str[i] == ' ') {
            cout << " ";
            continue;
        }

        str[i] = char('A' + (str[i] - 'A' - mul + 26) % 26);

        cout << str[i];
    }
    cout << "\n";
}
