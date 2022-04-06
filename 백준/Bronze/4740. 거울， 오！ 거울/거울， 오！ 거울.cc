#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string str; getline(cin, str);

        if(str == "***") break;

        for(int i=str.length()-1; i>=0; i--) cout << str[i];
        cout << "\n";
    }
}
