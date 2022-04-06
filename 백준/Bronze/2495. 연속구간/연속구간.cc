#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int i=0; i<3; i++) {
        string str; cin >> str;

        int prev = str[0], cnt = 1, Max = 1;
        for(int i=1; i<8; i++) {
            if(str[i] == prev) cnt++;
            else {
                if(cnt > Max) Max = cnt;
                cnt = 1;
            }
            prev = str[i];
        }
        if(cnt > Max) Max = cnt;

        cout << Max << "\n";
    }
}
