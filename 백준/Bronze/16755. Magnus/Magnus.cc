#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int mode = 0, ans = 0;
    for(int i=0; i<str.length(); i++) {
        if(mode == 0 && str[i] == 'H') mode++;
        else if(mode == 1 && str[i] == 'O') mode++;
        else if(mode == 2 && str[i] == 'N') mode++;
        else if(mode == 3 && str[i] == 'I') {
            mode = 0;
            ans++;
        }
    }

    cout << ans << "\n";
}
