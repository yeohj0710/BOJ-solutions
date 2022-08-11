#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string com, str; cin >> com >> str;

        for(int i=com.length()-1; i>=0; i--) {
            if(com[i] == 'J') str = str.back() + str.substr(0, str.length()-1);
            else if(com[i] == 'C') str = str.substr(1, str.length()-1) + str.front();
            else if(com[i] == 'E') {
                if(str.length() % 2 == 0) str = str.substr((str.length()+1)/2, str.length()/2) + str.substr(0, str.length()/2);
                else str = str.substr((str.length()+1)/2, str.length()/2) + str[str.length()/2] + str.substr(0, str.length()/2);
            }
            else if(com[i] == 'A') reverse(str.begin(), str.end());
            else if(com[i] == 'P') {
                for(int j=0; j<str.length(); j++) {
                    if(str[j] == '0') str[j] = '9';
                    else if(str[j] >= '1' && str[j] <= '9') str[j]--;
                }
            }
            else if(com[i] == 'M') {
                for(int j=0; j<str.length(); j++) {
                    if(str[j] == '9') str[j] = '0';
                    else if(str[j] >= '0' && str[j] <= '8') str[j]++;
                }
            }
        }

        cout << str << "\n";
    }
}
