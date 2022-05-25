#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    string a = "kangaroo", b = "kiwibird";

    int x = 0, y = 0;

    for(int i=0; i<str.length(); i++)
        for(int j=0; j<a.length(); j++) {
            if(str[i] >= 'a' && str[i] <= 'z')
                if(str[i] == a[j]) x++;
            if(str[i] >= 'A' && str[i] <= 'Z')
                if(char(str[i] - 'A' + 'a') == a[j]) x++;
        }

    for(int i=0; i<str.length(); i++)
        for(int j=0; j<b.length(); j++) {
            if(str[i] >= 'a' && str[i] <= 'z')
                if(str[i] == b[j]) y++;
            if(str[i] >= 'A' && str[i] <= 'Z')
                if(char(str[i] - 'A' + 'a') == b[j]) y++;
        }

    if(x > y) cout << "Kangaroos\n";
    else if(x < y) cout << "Kiwis\n";
    else cout << "Feud continues\n";
}
