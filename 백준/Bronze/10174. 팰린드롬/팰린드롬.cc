#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;
    cin.ignore();

    while(T--) {
        string str; getline(cin, str);

        for(int i=0; i<str.length(); i++)
            if(str[i] >= 'A' && str[i] <= 'Z') str[i] += 'a' - 'A';

        string rev = str;
        reverse(rev.begin(), rev.end());

        if(str == rev) cout << "Yes\n";
        else cout << "No\n";
    }
}
