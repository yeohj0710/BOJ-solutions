#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string cv[] = {"@", "8", "(", "|)", "3", "#", "6", "[-]", "|", "_|",
                    "|<", "1", "[]\\/[]", "[]\\[]", "0", "|D", "(,)", "|Z",
                    "$", "']['", "|_|", "\\/", "\\/\\/", "}{", "`/", "2"};

    string str; getline(cin, str);

    for(int i=0; i<str.length(); i++) {
        if(str[i] >= 'a' && str[i] <= 'z') cout << cv[str[i] - 'a'];
        else if(str[i] >= 'A' && str[i] <= 'Z') cout << cv[str[i] - 'A'];
        else cout << str[i];
    }
}
