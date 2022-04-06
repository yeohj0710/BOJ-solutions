#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string str; getline(cin, str);

        if(str == "#") break;

        bool check[26] = {};
        for(int i=0; i<str.length(); i++) {
            if(str[i] >= 'A' && str[i] <= 'Z') check[str[i] - 'A'] = true;
            else if(str[i] >= 'a' && str[i] <= 'z') check[str[i] - 'a'] = true;
        }

        int cnt = 0;
        for(int i=0; i<26; i++)
            if(check[i]) cnt++;

        cout << cnt << "\n";
    }
}
