#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string str; getline(cin, str);
        if(str == "END") break;

        int cnt[26] = {};
        for(int i=0; i<str.length(); i++)
            if(str[i] >= 'A' && str[i] <= 'Z') cnt[str[i] - 'A']++;

        bool check = true;
        for(int i=0; i<26; i++)
            if(cnt[i] >= 2) check = false;

        if(check) cout << str << "\n";
    }
}
