#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<string> v;

    string word;
    while(cin >> word) v.push_back(word);

    sort(v.begin(), v.end());

    bool check = true;
    for(int i=1; i<v.size(); i++)
        if(v[i] == v[i-1]) check = false;

    if(check) cout << "yes\n";
    else cout << "no\n";
}
