#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int i=1; ; i++) {
        string str[2]; cin >> str[0] >> str[1];

        if(str[0] == "END" && str[1] == "END") break;

        int cnt[2][26] = {};
        for(int i=0; i<2; i++)
            for(int j=0; j<str[i].length(); j++) cnt[i][str[i][j] - 'a']++;

        bool check = true;
        for(int i=0; i<26; i++)
            if(cnt[0][i] != cnt[1][i]) check = false;

        cout << "Case " << i << ": ";
        if(check) cout << "same\n";
        else cout << "different\n";
    }
}
