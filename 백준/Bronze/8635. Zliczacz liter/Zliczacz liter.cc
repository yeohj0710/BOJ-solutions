#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    cin.ignore();

    int cnt1[26] = {}, cnt2[26] = {};

    while(N--) {
        string str; getline(cin, str);

        for(int i=0; i<str.length(); i++) {
            if(str[i] >= 'a' && str[i] <= 'z') cnt1[str[i] - 'a']++;
            else if(str[i] >= 'A' && str[i] <= 'Z') cnt2[str[i] - 'A']++;
        }
    }

    for(int i=0; i<26; i++)
        if(cnt1[i] > 0) cout << char('a' + i) << " " << cnt1[i] << "\n";

    for(int i=0; i<26; i++)
        if(cnt2[i] > 0) cout << char('A' + i) << " " << cnt2[i] << "\n";
}
