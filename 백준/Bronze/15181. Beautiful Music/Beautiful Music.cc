#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string note = "ABCDEFG";

    while(true) {
        string str; cin >> str;
        if(str == "#") break;

        bool check = true;
        for(int i=1; i<str.length(); i++) {
            bool found = false;
            for(int j=0; j<7; j++) {
                if(str[i-1] == note[j] && str[i] == note[(j+2) % 7]) found = true;
                if(str[i-1] == note[j] && str[i] == note[(j+4) % 7]) found = true;
                if(str[i-1] == note[j] && str[i] == note[(j+6) % 7]) found = true;
            }

            if(!found) check = false;
        }

        if(check) cout << "That music is beautiful.\n";
        else cout << "Ouch! That hurts my ears.\n";
    }
}
