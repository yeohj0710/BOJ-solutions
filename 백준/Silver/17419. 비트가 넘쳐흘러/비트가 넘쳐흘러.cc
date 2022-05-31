#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int L; cin >> L;

    string str; cin >> str;

    int ans = 0;
    for(int i=0; i<str.length(); i++)
        if(str[i] == '1') ans++;

    cout << ans << "\n";
}
