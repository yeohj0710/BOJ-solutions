#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int ans = 0;
    for(int i=0; i<str.length(); i++) {
        if(i % 3 == 0 && str[i] != 'P') ans++;
        else if(i % 3 == 1 && str[i] != 'E') ans++;
        else if(i % 3 == 2 && str[i] != 'R') ans++;
    }

    cout << ans << "\n";
}
