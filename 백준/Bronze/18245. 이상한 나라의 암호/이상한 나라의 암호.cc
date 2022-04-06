#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int i=2; ; i++) {
        string str; getline(cin, str);

        if(str == "Was it a cat I saw?") break;

        for(int j=0; j<str.length(); j+=i) cout << str[j];
        cout << "\n";
    }
}
