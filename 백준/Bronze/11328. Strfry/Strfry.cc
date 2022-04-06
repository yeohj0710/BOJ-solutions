#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str1, str2; cin >> str1 >> str2;

        int cnt1[26] = {}, cnt2[26] = {};
        for(int i=0; i<str1.length(); i++) cnt1[str1[i]-'a']++;
        for(int i=0; i<str2.length(); i++) cnt2[str2[i]-'a']++;

        bool check = true;
        for(int i=0; i<26; i++)
            if(cnt1[i] != cnt2[i]) check = false;

        if(check) cout << "Possible\n";
        else cout << "Impossible\n";
    }
}
