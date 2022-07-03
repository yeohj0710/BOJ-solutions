#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    vector<int> pos(26, -1);

    for(int i=0; i<str.length(); i++)
        if(pos[str[i] - 'a'] == -1) pos[str[i] - 'a'] = i;

    for(int i=0; i<26; i++) cout << pos[i] << " ";
    cout << "\n";
}
