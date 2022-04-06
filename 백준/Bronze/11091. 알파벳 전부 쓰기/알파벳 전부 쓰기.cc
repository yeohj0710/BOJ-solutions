#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;
    cin.ignore();

    while(T--) {
        string str; getline(cin, str);

        for(int i=0; i<str.length(); i++)
            if(str[i] >= 'A' && str[i] <= 'Z') str[i] += 'a' - 'A';

        bool check[26] = {};
        for(int i=0; i<str.length(); i++) check[str[i] - 'a'] = true;

        bool isPangram = true;
        for(int i=0; i<26; i++)
            if(!check[i]) isPangram = false;

        if(isPangram) cout << "pangram\n";
        else {
            cout << "missing ";
            for(int i=0; i<26; i++)
                if(!check[i]) cout << char('a' + i);
            cout << "\n";
        }
    }
}
