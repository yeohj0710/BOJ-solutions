#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;
    int check = true;
    for(int i=0; i<str.length(); i++)
        if(str[i] != str[str.length()-1-i]) check = false;
    if(check) cout << "true";
    else cout << "false";
}
