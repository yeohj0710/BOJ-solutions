#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    vector<char> v;
    char ch;

    while(cin >> ch) v.push_back(ch);

    for(int i=0; i<str.length(); i++)
        for(int j=0; j<v.size(); j++)
            if(str[i] == v[j]) str[i] += 'a' - 'A';

    cout << str << "\n";
}
