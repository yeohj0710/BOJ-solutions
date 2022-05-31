#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    char v[4][4];

    for(int i=0; i<4; i++) {
        int x = str[i] - '0';
        for(int j=0; j<4; j++) {
            if(x & (1 << j)) v[i][j] = '*';
            else v[i][j] = '.';
        }
    }

    for(int i=3; i>=0; i--) {
        for(int j=0; j<4; j++) {
            cout << v[j][i];
            if(j == 0 || j == 2) cout << " ";
            if(j == 1) cout << "   ";
        }
        cout << "\n";
    }
}
