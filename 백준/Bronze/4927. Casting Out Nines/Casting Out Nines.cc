#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int t=1; ; t++) {
        string str; cin >> str;
        if(str == ".") break;

        cout << t << ". ";

        int i = 0, a = 0, b = 0, c = 0;
        char ch;

        while(true) {
            if(str[i] == '*' || str[i] == '+') {
                ch = str[i];
                i++;
                break;
            }
            a += str[i] - '0';
            i++;
        }
        while(true) {
            if(str[i] == '=') {
                i++;
                break;
            }
            b += str[i] - '0';
            i++;
        }
        while(true) {
            if(str[i] == '.') {
                i++;
                break;
            }
            c += str[i] - '0';
            i++;
        }

        if(ch == '+') {
            if((a + b) % 9 == c % 9) cout << "PASS\n";
            else cout << "NOT!\n";
        }
        else {
            if((a * b) % 9 == c % 9) cout << "PASS\n";
            else cout << "NOT!\n";
        }
    }
}
