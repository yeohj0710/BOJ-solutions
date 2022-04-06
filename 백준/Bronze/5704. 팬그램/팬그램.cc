#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string str; getline(cin, str);
        if(str == "*") break;

        bool check[26] = {};
        for(int i=0; i<str.length(); i++)
            if(str[i] >= 'a' && str[i] <= 'z') check[str[i]-'a'] = true;

        bool isPangram = true;
        for(int i=0; i<26; i++)
            if(!check[i]) isPangram = false;

        if(isPangram) cout << "Y\n";
        else cout << "N\n";
    }
}
