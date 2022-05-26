#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    vector<string> v;

    string temp = "";

    for(int i=0; i<str.length(); i++) {
        if(str[i] >= '0' && str[i] <= '9') temp += str[i];
        else if(temp != "") {
            v.push_back(temp);
            temp = "";
        }
    }
    if(temp != "") v.push_back(temp);

    sort(v.begin(), v.end());

    v.erase(unique(v.begin(), v.end()), v.end());

    cout << v.size() << "\n";
}
