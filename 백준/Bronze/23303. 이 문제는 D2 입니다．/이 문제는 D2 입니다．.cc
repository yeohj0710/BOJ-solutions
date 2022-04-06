#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; getline(cin, str);

    bool check = false;
    for(int i=1; i<str.length(); i++)
        if((str[i-1] == 'd' || str[i-1] == 'D') && str[i] == '2') check = true;

    if(check) cout << "D2";
    else cout << "unrated";
}
