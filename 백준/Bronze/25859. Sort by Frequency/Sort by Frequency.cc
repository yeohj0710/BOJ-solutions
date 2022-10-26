#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int cnt[26] = {};

    for(int i=0; i<str.length(); i++) cnt[str[i] - 'a']++;

    for(int i=str.length(); i>0; i--)
        for(int j=0; j<26; j++)
            if(cnt[j] == i) {
                for(int k=0; k<i; k++)
                    cout << char('a' + j);
            }
    cout << "\n";
}
