#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    vector<string> v;

    for(int i=0; i<str.length(); i++)
        for(int j=i; j<str.length(); j++)
            v.push_back(str.substr(i, j-i+1));

    sort(v.begin(), v.end());

    int ans = 1;
    for(int i=1; i<v.size(); i++)
        if(v[i] != v[i-1]) ans++;

    cout << ans << "\n";
}
