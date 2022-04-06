#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str1, str2; cin >> str1 >> str2;

    int L = str1.length();

    string ans = "";
    for(int i=0; i<L; i++) {
        if(str1[i] == '1' && str2[i] == '1') ans += '1';
        else ans += '0';
    }
    cout << ans << "\n";

    ans = "";
    for(int i=0; i<L; i++) {
        if(str1[i] == '1' || str2[i] == '1') ans += '1';
        else ans += '0';
    }
    cout << ans << "\n";

    ans = "";
    for(int i=0; i<L; i++) {
        if(str1[i] != str2[i]) ans += '1';
        else ans += '0';
    }
    cout << ans << "\n";

    ans = "";
    for(int i=0; i<L; i++) {
        if(str1[i] == '0') ans += '1';
        else ans += '0';
    }
    cout << ans << "\n";

    ans = "";
    for(int i=0; i<L; i++) {
        if(str2[i] == '0') ans += '1';
        else ans += '0';
    }
    cout << ans << "\n";
}
