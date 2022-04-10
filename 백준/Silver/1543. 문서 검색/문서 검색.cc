#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str, word;

    getline(cin, str);
    getline(cin, word);

    int i = 0, ans = 0;
    while(i < str.length()) {
        if(str.substr(i, word.length()) == word) {
            ans++;
            i += word.length();
        }
        else i++;
    }

    cout << ans;
}
