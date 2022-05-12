#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int ans = 0;
    for(int i=0; i<str.length(); i++)
        for(int j=i+1; j<str.length(); j++) {
            string temp = str.substr(i, j-i+1);

            if(temp.length() % 2 == 1) continue;

            int a = 0, b = 0;
            for(int i=0; i<temp.length()/2; i++) a += temp[i] - '0';
            for(int i=temp.length()/2; i<temp.length(); i++) b += temp[i] - '0';

            if(a != b) continue;

            ans = max(ans, int(temp.length()));
        }

    cout << ans << "\n";
}
