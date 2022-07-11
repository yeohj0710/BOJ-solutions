#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int ans = 0;
    for(int i=0; i<5; i++) {
        string str; cin >> str;

        bool check = false;
        for(int i=2; i<str.length(); i++)
            if(str[i-2] == 'F' && str[i-1] == 'B' && str[i] == 'I') check = true;

        if(check) {
            cout << i+1 << " ";
            ans++;
        }
    }

    if(ans == 0) cout << "HE GOT AWAY!\n";
}
