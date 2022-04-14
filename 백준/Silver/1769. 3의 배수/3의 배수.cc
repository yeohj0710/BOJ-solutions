#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int sum = 0;
    for(int i=0; i<str.length(); i++) sum += str[i] - '0';

    int ans;
    if(str.length() == 1) ans = 0;
    else ans = 1;

    while(sum >= 10) {
        int temp = sum;
        sum = 0;

        while(temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        ans++;
    }

    cout << ans << "\n";
    if(sum % 3 == 0) cout << "YES";
    else cout << "NO";
}
