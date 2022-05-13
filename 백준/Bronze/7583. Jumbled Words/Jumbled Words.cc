#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string str; getline(cin, str);
        if(str == "#") break;

        int l, r;
        for(int i=0; i<str.length(); i++) {
            if(i == 0 || str[i-1] == ' ') l = i;
            if(i == str.length()-1 || str[i+1] == ' ') {
                r = i;

                cout << str[l];
                for(int j=r-1; j>=l+1; j--) cout << str[j];
                if(l != r) cout << str[r];
                cout << " ";
            }
        }
        cout << "\n";
    }
}
