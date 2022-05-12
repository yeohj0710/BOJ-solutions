#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        int cnt = 1;
        for(int i=1; i<str.length(); i++) {
            if(str[i] == str[i-1]) cnt++;
            else {
                cout << cnt << " " << str[i-1] << " ";
                cnt = 1;
            }
        }
        cout << cnt << " " << str[str.length()-1] << "\n";
    }
}
