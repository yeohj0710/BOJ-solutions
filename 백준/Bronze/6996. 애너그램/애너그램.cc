#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str[2]; cin >> str[0] >> str[1];

        int cnt[2][26] = {};
        for(int i=0; i<2; i++)
            for(int j=0; j<str[i].length(); j++) cnt[i][str[i][j] - 'a']++;

        bool check = true;
        for(int i=0; i<26; i++)
            if(cnt[0][i] != cnt[1][i]) check = false;

        cout << str[0] << " & " << str[1] << " are ";
        if(!check) cout << "NOT ";
        cout << "anagrams.\n";
    }
}
