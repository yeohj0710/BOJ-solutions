#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int zero = 0, one = 0;

    if(str[0] == '0') zero++;
    else one++;

    for(int i=0; i<str.length()-1; i++)
        if(str[i+1] != str[i]) {
            if(str[i+1] == '0') zero++;
            else one++;
        }

    cout << min(zero, one);
}
