#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; getline(cin, str);

    string temp = "";
    bool check = false;

    for(int i=0; i<str.length(); i++) {
        if(str[i] == '<') {
            reverse(temp.begin(), temp.end());
            cout << temp;
            temp = "<";
            check = true;
        }
        else if(str[i] == '>') {
            temp += ">";
            cout << temp;
            temp = "";
            check = false;
        }
        else if(str[i] == ' ') {
            if(!check) reverse(temp.begin(), temp.end());
            cout << temp << " ";
            temp = "";
        }
        else temp += str[i];
    }
    reverse(temp.begin(), temp.end());
    cout << temp << "\n";
}
