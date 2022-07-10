#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    char c; cin >> c;
    string str; cin >> str;

    int cnt[26] = {};
    for(int i=0; i<N; i++) cnt[str[i] - 'A']++;

    char ch;
    int Max = 0;
    for(int i=0; i<26; i++)
        if(cnt[i] > Max) {
            Max = cnt[i];
            ch = char('A' + i);
        }

    for(int i=0; i<N; i++) {
        cout << char('A' + (str[i] - 'A' + (c - ch + 26) % 26) % 26);
    }
    cout << "\n";
}
