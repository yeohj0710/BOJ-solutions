#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;
    cin.ignore();

    while(T--) {
        string str; getline(cin, str);

        if(str[0] >= 'a' && str[0] <= 'z')
            str[0] = char(str[0] + 'A' - 'a');

        cout << str << "\n";
    }
}
