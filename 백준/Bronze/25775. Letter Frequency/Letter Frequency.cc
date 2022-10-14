#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<vector<int>> v(50, vector<int>(26));
    int mlen = 0;

    while(N--) {
        string str; cin >> str;

        mlen = max(mlen, (int)str.length());

        for(int i=0; i<str.length(); i++) v[i][str[i] - 'a']++;
    }

    for(int i=0; i<mlen; i++) {
        cout << i+1 << ": ";

        int Max = 0;

        for(int j=0; j<26; j++) Max = max(Max, v[i][j]);

        for(int j=0; j<26; j++)
            if(v[i][j] == Max) cout << char('a' + j) << " ";
        cout << "\n";
    }
}
