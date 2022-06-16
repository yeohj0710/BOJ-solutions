#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string str; cin >> str;
        if(str == "*") break;

        bool check = true;
        for(int i=1; i<str.length()-1; i++) {
            vector<string> v;
            for(int j=0; j<str.length()-i; j++) {
                string temp = "";
                temp += str[j];
                temp += str[j+i];
                v.push_back(temp);
            }

            sort(v.begin(), v.end());

            for(int j=0; j<v.size()-1; j++)
                if(v[j] == v[j+1]) check = false;
        }

        if(check) cout << str << " is surprising.\n";
        else cout << str << " is NOT surprising.\n";
    }
}
