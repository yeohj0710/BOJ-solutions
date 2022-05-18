#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string a, b; cin >> a >> b;
        if(a == "0" && b == "0") break;

        if(a.length() < b.length()) swap(a, b);
        while(a.length() != b.length()) b = "0" + b;

        int carry = 0, ans = 0;
        for(int i=a.length()-1; i>=0; i--) {
            if(a[i] - '0' + b[i] - '0' + carry >= 10) {
                ans++;
                carry = 1;
            }
            else carry = 0;
        }

        cout << ans << "\n";
    }
}
