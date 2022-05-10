#include <bits/stdc++.h>
using namespace std;

const int MAX = 200001;

int sum[MAX][26] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    for(int i=0; i<str.length(); i++) {
        for(int j=0; j<26; j++) sum[i+1][j] = sum[i][j];

        sum[i+1][str[i] - 'a']++;
    }

    int Q; cin >> Q;

    while(Q--) {
        char c; int a, b; cin >> c >> a >> b;

        cout << sum[b+1][c - 'a'] - sum[a][c - 'a'] << "\n";
    }
}
