#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<char> v;
    map<char, int> m;

    string str;

    while(cin >> str) {
        for(int i=0; i<str.length(); i++) {
            v.push_back(str[i]);
            m[str[i]]++;
        }
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    int Max = 0;
    for(int i=0; i<v.size(); i++) Max = max(Max, m[v[i]]);

    for(int i=Max; i>0; i--) {
        for(int j=0; j<v.size(); j++) {
            if(m[v[j]] >= i) cout << "#";
            else cout << " ";
        }
        cout << "\n";
    }

    for(int i=0; i<v.size(); i++) cout << v[i];
    cout << "\n";
}
