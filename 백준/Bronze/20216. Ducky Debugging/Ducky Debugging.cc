#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string str; getline(cin, str);

        if(str == "I quacked the code!") break;
        else if(str.back() == '?') cout << "Quack!" << endl;
        else if(str.back() == '.') cout << "*Nod*" << endl;
    }
}
