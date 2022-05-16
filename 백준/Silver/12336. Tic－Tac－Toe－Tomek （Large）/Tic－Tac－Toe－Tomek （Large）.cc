#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;
    cin.ignore();

    for(int t=1; t<=T; t++) {
        char arr[4][4];
        for(int i=0; i<4; i++) {
            for(int j=0; j<4; j++) cin >> arr[i][j];
            cin.ignore();
        }

        int win = 0;

        for(int i=0; i<4; i++) {
            int a = 0, b = 0, c = 0;
            for(int j=0; j<4; j++) {
                if(arr[i][j] == 'O') a++;
                else if(arr[i][j] == 'X') b++;
                else if(arr[i][j] == 'T') c++;
            }

            if(a + c == 4) win = 1;
            else if(b + c == 4) win = 2;
        }

        for(int j=0; j<4; j++) {
            int a = 0, b = 0, c = 0;
            for(int i=0; i<4; i++) {
                if(arr[i][j] == 'O') a++;
                else if(arr[i][j] == 'X') b++;
                else if(arr[i][j] == 'T') c++;
            }

            if(a + c == 4) win = 1;
            else if(b + c == 4) win = 2;
        }

        int a = 0, b = 0, c = 0;
        for(int i=0; i<4; i++) {
            if(arr[i][i] == 'O') a++;
            else if(arr[i][i] == 'X') b++;
            else if(arr[i][i] == 'T') c++;
        }

        if(a + c == 4) win = 1;
        else if(b + c == 4) win = 2;

        a = 0, b = 0, c = 0;
        for(int i=0; i<4; i++) {
            if(arr[i][3-i] == 'O') a++;
            else if(arr[i][3-i] == 'X') b++;
            else if(arr[i][3-i] == 'T') c++;
        }

        if(a + c == 4) win = 1;
        else if(b + c == 4) win = 2;

        cout << "Case #" << t << ": ";
        if(win == 0) {
            bool check = true;
            for(int i=0; i<4; i++)
                for(int j=0; j<4; j++)
                    if(arr[i][j] == '.') check = false;

            if(check) cout << "Draw\n";
            else cout << "Game has not completed\n";
        }
        else if(win == 1) cout << "O won\n";
        else if(win == 2) cout << "X won\n";
    }
}
