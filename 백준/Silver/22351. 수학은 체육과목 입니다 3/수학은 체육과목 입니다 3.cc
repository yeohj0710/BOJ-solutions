#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    for(int i=1; i<=3; i++) {
        int x = stoi(str.substr(0, i));
        int y;

        string temp = "";
        for(int j=x; ; j++) {
            temp += to_string(j);
            if(temp.length() >= str.length()) {
                y = j;
                break;
            }
        }

        if(temp.length() != str.length()) continue;

        bool check = true;
        for(int j=0; j<str.length(); j++)
            if(temp[j] != str[j]) check = false;

        if(check) {
            cout << x << " " << y << "\n";
            break;
        }
    }
}
