#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string key; cin >> key;

    int N; cin >> N;
    vector<string> ans;
    while(N--) {
        string str; cin >> str;

        bool check = true;
        for(int i=0; i<str.length(); i++)
            if(key[i] != '*' && str[i] != key[i]) check = false;

        if(check) ans.push_back(str);
    }

    cout << ans.size() << "\n";
    for(int i=0; i<ans.size(); i++) cout << ans[i] << "\n";
}
