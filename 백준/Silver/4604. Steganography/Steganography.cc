#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string key = "";

        while(true) {
            string str; getline(cin, str);
            if(str == "#") return 0;
            if(str == "*") break;

            int cnt = 0;

            for(int i=0; i<str.length(); i++) {
                if(str[i] == ' ') cnt++;
                else if(str[i] != ' ' && cnt > 0) {
                    if(cnt % 2 == 0) key += '1';
                    else key += '0';

                    cnt = 0;
                }
            }
        }

        while(key.length() % 5 != 0) key += '0';

        for(int i=0; i<key.length(); i+=5) {
            string tmp = key.substr(i, 5);

            int x = 0;

            for(int j=0; j<5; j++) x += pow(2, 4-j) * (tmp[j] - '0');

            if(x == 0) cout << " ";
            else if(x >= 1 && x <= 26) cout << char('A' + x - 1);
            else if(x == 27) cout << "'";
            else if(x == 28) cout << ",";
            else if(x == 29) cout << "-";
            else if(x == 30) cout << ".";
            else if(x == 31) cout << "?";
        }

        cout << "\n";
    }
}
