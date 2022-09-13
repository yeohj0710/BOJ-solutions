#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; getline(cin, str);

    int x = 0;

    for(int i=0; i<str.length(); i++) x += str[i];

    cout << char(x / str.length()) << "\n";
}
