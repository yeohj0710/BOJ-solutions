#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int x;
    for(int i=0; i<str.length(); i++)
        if(str[i] == '*') x = i;

    int sum = 0;
    for(int i=0; i<str.length(); i+=2) {
        if(str[i] == '*') continue;
        sum += str[i] - '0';
    }
    for(int i=1; i<str.length(); i+=2) {
        if(str[i] == '*') continue;
        sum += (str[i] - '0') * 3;
    }

    sum %= 10;

    if(x % 2 == 0) cout << 10 - sum << "\n";
    else {
        for(int i=0; i<=9; i++)
            if((i*3 + sum) % 10 == 0) {
                cout << i << "\n";
                break;
            }
    }
}
