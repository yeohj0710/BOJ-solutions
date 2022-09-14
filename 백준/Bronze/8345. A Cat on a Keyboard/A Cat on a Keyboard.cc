#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; getline(cin, str);

    string cnv[5] = {"`1234567890-=", "QWERTYUIOP[]\\", "ASDFGHJKL;'", "ZXCVBNM,./", " "};

    for(int i=0; i<str.length(); i++) {
        for(int j=0; j<5; j++) {
            bool check = false;

            for(int k=0; k<cnv[j].length(); k++)
                if(str[i] == cnv[j][k]) check = true;

            if(check) {
                cout << j + 1;
                break;
            }
        }
    }
    cout << "\n";
}
