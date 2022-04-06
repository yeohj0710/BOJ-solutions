#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;
    cin.ignore();

    while(T--) {
        string str; getline(cin, str);

        int Left = 0, Right;
        for(int i=0; i<str.length(); i++) {
            if(str[i+1] == ' ' || str[i+1] == '\0') {
                Right = i;

                string temp = "";
                for(int j=Left; j<=Right; j++) temp += str[j];
                for(int j=Left; j<=Right; j++) str[j] = temp[Right - j];

                if(i+2 < str.length()) Left = i+2;
            }
        }

        cout << str << "\n";
    }
}
