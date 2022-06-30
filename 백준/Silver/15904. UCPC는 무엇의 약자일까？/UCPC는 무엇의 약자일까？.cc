#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string word, str = "";

    while(cin >> word)
        str += word;

    bool b1 = false, b2 = false, b3 = false, b4 = false;

    for(int i=0; i<str.length(); i++) {
        if(!b1 && str[i] == 'U') b1 = true;
        else if(b1 && !b2 && str[i] == 'C') b2 = true;
        else if(b1 && b2 && !b3 && str[i] == 'P') b3 = true;
        else if(b1 && b2 && b3 && !b4 && str[i] == 'C') b4 = true;
    }

    if(b4) cout << "I love UCPC\n";
    else cout << "I hate UCPC\n";
}
