#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;
    cin.ignore();

    while(T--) {
        string str; getline(cin, str);

        if(str[0] == 'P') {
            cout << "skipped\n";
            continue;
        }

        string a = "", b = "";
        int i;
        for(i=0; i<str.length(); i++) {
            if(str[i] == '+') break;
            a += str[i];
        }
        b = str.substr(i+1, str.length()-1);

        cout << stoi(a) + stoi(b) << "\n";
    }
}
