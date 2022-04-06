#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int ans = 0, Stack = 0;
    for(int i=0; i<str.length(); i++) {
        if(str[i] == '(') {
            if(str[i+1] == ')') {
                ans += Stack;
                i++;
            }
            else Stack++;
        }
        else if(str[i] == ')') {
            ans++;
            Stack--;
        }
    }

    cout << ans;
}
