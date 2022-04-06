#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        int dir = 1, x = 0, y = 0, min_x = 0, min_y = 0, max_x = 0, max_y = 0;
        for(int i=0; i<str.length(); i++) {
            if(str[i] == 'F') {
                if(dir == 1) y++;
                else if(dir == 2) x++;
                else if(dir == 3) y--;
                else x--;
            }
            else if(str[i] == 'B') {
                if(dir == 1) y--;
                else if(dir == 2) x--;
                else if(dir == 3) y++;
                else x++;
            }
            else if(str[i] == 'L') {
                if(dir == 1) dir = 4;
                else dir--;
            }
            else if(str[i] == 'R') {
                if(dir == 4) dir = 1;
                else dir++;
            }

            if(x < min_x) min_x = x;
            if(y < min_y) min_y = y;
            if(x > max_x) max_x = x;
            if(y > max_y) max_y = y;
        }

        cout << (max_x - min_x)*(max_y - min_y) << "\n";
    }
}
