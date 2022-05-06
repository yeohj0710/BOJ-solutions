#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;
    cin.ignore();

    for(int t=1; t<=T; t++) {
        cout << "Case #" << t << ": ";

        string str; getline(cin, str);

        vector<string> word;

        string temp = "";
        for(int i=0; i<str.length(); i++) {
            if(str[i] != ' ') temp += str[i];
            else {
                word.push_back(temp);
                temp = "";
            }
        }
        word.push_back(temp);

        for(int i=word.size()-1; i>=0; i--) cout << word[i] << " ";
        cout << "\n";
    }
}
