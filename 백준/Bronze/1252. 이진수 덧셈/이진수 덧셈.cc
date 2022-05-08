#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a, b; cin >> a >> b;

    if(a.length() < b.length()) swap(a, b);

    int diff = a.length() - b.length();
    for(int i=0; i<diff; i++) b = "0" + b;

    string ans = "";
    bool carry = false;

    for(int i=a.length()-1; i>=0; i--) {
        int sum = 0;
        if(a[i] == '1') sum++;
        if(b[i] == '1') sum++;
        if(carry) sum++;

        if(sum == 0) ans = "0" + ans, carry = false;
        else if(sum == 1) ans = "1" + ans, carry = false;
        else if(sum == 2) ans = "0" + ans, carry = true;
        else if(sum == 3) ans = "1" + ans, carry = true;
    }

    if(carry) ans = "1" + ans;

    bool check = false;
    for(int i=0; i<ans.length(); i++)
        if(ans[i] == '1') {
            ans = ans.substr(i, ans.length() - i);
            check = true;
            break;
        }

    if(check) cout << ans << "\n";
    else cout << 0 << "\n";
}
