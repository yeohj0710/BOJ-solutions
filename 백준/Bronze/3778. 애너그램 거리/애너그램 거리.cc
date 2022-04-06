#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;
    cin.ignore();

    for(int t=1; t<=T; t++) {
        string word[2];
        getline(cin, word[0]); getline(cin, word[1]);

        int cnt[2][26] = {};
        for(int i=0; i<2; i++)
            for(int j=0; j<word[i].length(); j++) cnt[i][word[i][j]-'a']++;

        int dist = 0;
        for(int i=0; i<26; i++) dist += abs(cnt[0][i] - cnt[1][i]);

        cout << "Case #" << t << ": " << dist << "\n";
    }
}
