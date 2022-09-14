#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str;

    vector<int> v(10);
    int len;

    while(cin >> str) {
        len = str.length();

        for(int i=0; i<str.length(); i++) v[i] += str[i] - '0';
    }

    for(int i=0; i<len; i++) cout << v[i] % 10;
    cout << "\n";
}
