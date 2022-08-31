#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string str; cin >> str;
        if(str == "0") break;

        vector<int> v;
        string tmp = "";

        for(int i=0; i<str.length(); i++) {
            if(str[i] != '+') tmp += str[i];
            else {
                v.push_back(stoi(tmp));
                tmp = "";
            }
        }
        v.push_back(stoi(tmp));
        tmp = "";

        vector<bool> u(v.size());
        bool fir = true;

        for(int i=0; i<v.size(); i++) {
            if(u[i]) continue;

            int idx = -1;

            for(int j=i+1; j<v.size(); j++) {
                if((v[i] + v[j]) % 10 == 0 && !u[j]) idx = j;
            }

            if(idx != -1) {
                if(fir) fir = false;
                else cout << "+";

                cout << v[i] << "+" << v[idx];
                u[i] = u[idx] = true;
            }
        }

        for(int i=0; i<u.size(); i++)
            if(!u[i]) {
                if(fir) fir = false;
                else cout << "+";

                cout << v[i];
            }

        cout << "\n";
    }
}
