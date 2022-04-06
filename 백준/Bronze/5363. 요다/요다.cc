#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;
    cin.ignore();

    while(T--) {
        string str; getline(cin, str);

        int blankCnt = 0, i = 0;
        string temp = "";
        for(i=0; i<str.length(); i++) {
            if(blankCnt == 2) break;

            if(str[i] == ' ') blankCnt++;
            temp += str[i];
        }
        cout << str.substr(i, str.length()-1) << " " << temp << "\n";
    }
}
