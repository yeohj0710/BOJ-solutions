#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int hole[26] = {1, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0};

    int T; cin >> T;
    cin.ignore();

    while(T--) {
        string str; getline(cin, str);

        int ans = 0;
        for(int i=0; i<str.length(); i++)
            if(str[i] >= 'A' && str[i] <= 'Z') ans += hole[str[i] - 'A'];

        cout << ans << "\n";
    }
}
