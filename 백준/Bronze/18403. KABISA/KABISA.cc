#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;
    cin.ignore();

    while(T--) {
        string str; getline(cin, str);

        string temp = "";
        vector<int> v;

        for(int i=0; i<str.length(); i++) {
            if(str[i] == ',') {
                v.push_back(stoi(temp));
                temp = "";
            }
            else if(str[i] >= '0' && str[i] <= '9') temp += str[i];
        }
        v.push_back(stoi(temp));

        for(int i=0; i<v.size(); i++)
            if((v[i] % 4 == 0 && v[i] % 100 != 0) || v[i] % 400 == 0) cout << v[i] << " ";

        cout << "\n";
    }
}
