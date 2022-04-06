#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    bool zero = false;
    int sum = 0;
    for(int i=0; i<str.length(); i++) {
        if(str[i] == '0') zero = true;
        sum += str[i] - '0';
    }

    if(sum % 3 == 0 && zero) {
        sort(str.begin(), str.end(), greater<char>());
        cout << str;
    }
    else cout << "-1";
}
