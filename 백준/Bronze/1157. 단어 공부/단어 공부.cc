#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    vector<int> cnt(26);

    for(int i=0; i<str.length(); i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') cnt[str[i] - 'A']++;
        else if(str[i] >= 'a' && str[i] <= 'z') cnt[str[i] - 'a']++;
    }

    int Max = 0;
    for(int i=0; i<26; i++) Max = max(Max, cnt[i]);

    int max_cnt = 0;
    for(int i=0; i<26; i++)
        if(cnt[i] == Max) max_cnt++;

    if(max_cnt == 1) {
        for(int i=0; i<26; i++)
            if(cnt[i] == Max) {
                cout << char('A' + i) << "\n";
                break;
            }
    }
    else cout << "?\n";
}
