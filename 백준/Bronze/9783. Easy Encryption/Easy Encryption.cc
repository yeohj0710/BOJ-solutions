#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string str; getline(cin, str);

    for(int i=0; i<str.length(); i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            int x = str[i] - 'a' + 1;

            string num = to_string(x);

            while(num.length() < 2) num = '0' + num;

            cout << num;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z') {
            int x = str[i] - 'A' + 27;

            string num = to_string(x);

            while(num.length() < 2) num = '0' + num;

            cout << num;
        }
        else if(str[i] >= '0' && str[i] <= '9') cout << "#" << str[i];
        else cout << str[i];
    }
    cout << "\n";
}
