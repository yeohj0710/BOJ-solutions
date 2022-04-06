#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;
    cin.ignore();

    while(T--) {
        string str; getline(cin, str);

        string ans = "god";

        int start;
        for(int i=0; i<str.length(); i++)
            if(str[i] == ' ') {
                start = i;
                break;
            }

        for(int i=start+1; i<str.length(); i++)
            if(str[i] >= 'a' && str[i] <= 'z') ans += str[i];

        cout << ans << "\n";
    }
}
