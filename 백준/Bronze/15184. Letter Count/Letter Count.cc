#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; getline(cin, str);

    for(int i=0; i<str.length(); i++)
        if(str[i] >= 'a' && str[i] <= 'z') str[i] = char(str[i] + 'A' - 'a');

    int cnt[26] = {};
    for(int i=0; i<str.length(); i++)
        if(str[i] >= 'A' && str[i] <= 'Z') cnt[str[i] - 'A']++;

    for(int i=0; i<26; i++) {
        cout << char('A' + i) << " | ";
        for(int j=0; j<cnt[i]; j++) cout << "*";
        cout << "\n";
    }
}
