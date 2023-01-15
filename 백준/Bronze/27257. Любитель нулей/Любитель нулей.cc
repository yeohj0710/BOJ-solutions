#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    string str; cin >> str;

    int i = 0, j = str.length()-1;
    while(i < str.length() && str[i] == '0') i++;
    while(j >= 0 && str[j] == '0') j--;

    int ans = 0;
    for(int k=i; k<=j; k++)
        if(str[k] == '0') ans++;

    cout << ans << "\n";
}
