#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        int sum = 0;
        for(int i=0; i<str.length(); i++) {
            if(i%2 == 0) {
                if((str[i] - '0')*2 > 9) sum += (str[i] - '0')*2/10 + (str[i] - '0')*2%10;
                else sum += (str[i] - '0')*2;
            }
            else sum += str[i] - '0';
        }

        if(sum % 10 == 0) cout << "T\n";
        else cout << "F\n";
    }
}
