#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        int cnt1[26] = {};

        for(int i=0; i<str.length(); i++) cnt1[str[i] - 'A']++;

        int N; cin >> N;

        while(N--) {
            string word; cin >> word;

            int cnt2[26] = {};

            for(int i=0; i<word.length(); i++) cnt2[word[i] - 'A']++;

            bool check = true;

            for(int i=0; i<26; i++)
                if(cnt2[i] > cnt1[i]) check = false;

            if(check) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}
