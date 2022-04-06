#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string str; getline(cin, str);

        if(str == "#") break;

        string word = "";

        for(int i=0; i<str.length(); i++) {
            if(str[i] != ' ') word += str[i];
            else {
                reverse(word.begin(), word.end());
                cout << word << " ";
                word = "";
            }
        }
        reverse(word.begin(), word.end());
        cout << word << "\n";
    }
}
