#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    bool check = false;
    for(int i=1; i<str.length(); i++)
        if(str[i-1] == 's' && str[i] == 's') check = true;

    if(check) cout << "hiss\n";
    else cout << "no hiss\n";
}
