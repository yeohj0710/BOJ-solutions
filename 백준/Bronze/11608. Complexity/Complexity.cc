#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int cnt[26] = {};
    for(int i=0; i<str.length(); i++) cnt[str[i] - 'a']++;

    sort(cnt, cnt+26, greater<int>());

    int sum = 0;
    for(int i=2; i<26; i++) sum += cnt[i];

    cout << sum;
}
