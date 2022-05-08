#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int ans = 1;
    for(int i=1; i<str.length(); i++)
        if(str[i] <= str[i-1]) ans++;

    cout << ans << "\n";
}
