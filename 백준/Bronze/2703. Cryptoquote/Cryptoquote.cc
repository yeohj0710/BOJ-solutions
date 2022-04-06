#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        cin.ignore();

        string str; getline(cin, str);
        string key; cin >> key;

        for(int i=0; i<str.length(); i++)
            if(str[i] >= 'A' && str[i] <= 'Z') str[i] = key[str[i] - 'A'];

        cout << str << "\n";
    }
}
