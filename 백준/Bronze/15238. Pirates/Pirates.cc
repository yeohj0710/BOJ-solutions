#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int cnt[26] = {};

    string str; cin >> str;
    for(int i=0; i<str.length(); i++) cnt[str[i] - 'a']++;

    int Max = 0;
    for(int i=0; i<26; i++) Max = max(Max, cnt[i]);

    for(int i=0; i<26; i++)
        if(cnt[i] == Max) {
            cout << char('a' + i) << " " << cnt[i] << "\n";
            break;
        }
}
