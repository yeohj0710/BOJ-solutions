#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a, b; cin >> a >> b;

    string str = "";
    for(int i=0; i<8; i++) {
        str += a[i];
        str += b[i];
    }

    for(int i=15; i>1; i--)
        for(int j=0; j<i; j++)
            str[j] = char(((str[j] - '0') + (str[j+1] - '0'))%10 + '0');

    cout << str.substr(0, 2);
}
