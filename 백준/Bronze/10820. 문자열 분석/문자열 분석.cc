#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str;

    while(getline(cin, str)) {
        int a = 0, b = 0, c = 0, d = 0;

        for(int i=0; i<str.length(); i++) {
            if(str[i] >= 'a' && str[i] <= 'z') a++;
            else if(str[i] >= 'A' && str[i] <= 'Z') b++;
            else if(str[i] >= '0' && str[i] <= '9') c++;
            else if(str[i] == ' ') d++;
        }

        cout << a << " " << b << " " << c << " " << d << "\n";
    }
}
