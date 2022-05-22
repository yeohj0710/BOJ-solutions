#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<string> v;

    for(int i=0; i<N; i++) {
        string str; cin >> str;

        string temp = "";

        for(int j=0; j<str.length(); j++) {
            if(str[j] >= 'a' && str[j] <= 'z') temp += str[j];
            else if(str[j] >= 'A' && str[j] <= 'Z') temp += char(str[j] - 'A' + 'a');
        }

        bool check = true;
        for(int j=0; j<v.size(); j++)
            if(temp == v[j]) check = false;

        if(check) v.push_back(temp);
    }

    cout << v.size() << "\n";
}
