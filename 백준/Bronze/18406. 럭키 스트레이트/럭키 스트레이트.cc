#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int Left = 0, Right = 0;
    for(int i=0; i<str.length()/2; i++) Left += str[i] - '0';
    for(int i=str.length()/2; i<str.length(); i++) Right += str[i] - '0';

    if(Left == Right) cout << "LUCKY";
    else cout << "READY";
}
