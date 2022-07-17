#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    bool v[5][14] = {};

    string str; cin >> str;

    bool check = true;

    for(int i=0; i<str.length(); i+=3) {
        int a, b;

        if(str[i] == 'P') a = 1;
        else if(str[i] == 'K') a = 2;
        else if(str[i] == 'H') a = 3;
        else if(str[i] == 'T') a = 4;

        string temp = "";
        temp += str[i+1];
        temp += str[i+2];

        b = stoi(temp);

        if(v[a][b]) check = false;
        else v[a][b] = true;
    }

    if(check) {
        for(int i=1; i<=4; i++) {
            int cnt = 0;
            for(int j=1; j<=13; j++)
                if(!v[i][j]) cnt++;

            cout << cnt << " ";
        }
        cout << "\n";
    }
    else cout << "GRESKA\n";
}
