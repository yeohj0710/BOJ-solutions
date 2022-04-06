#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;
    str = "A" + str;

    int ans = 0;
    for(int i=1; i<str.length(); i++)
        ans += min(abs(str[i] - str[i-1]), min((str[i] - str[i-1] + 26) % 26, (str[i-1] - str[i] + 26) % 26));

    cout << ans;
}
