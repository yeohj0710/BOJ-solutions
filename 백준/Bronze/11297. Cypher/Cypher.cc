#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int a, b, c; cin >> a >> b >> c;
        cin.ignore();

        if(a == 0 && b == 0 && c == 0) break;

        int s = (a + b + c) % 25 + 1;

        string str; getline(cin, str);

        for(int i=0; i<str.length(); i++) {
            if(str[i] >= 'a' && str[i] <= 'z') {
                if(str[i] - s >= 'a') cout << char(str[i] - s);
                else cout << char(str[i] - s + 26);
            }
            else cout << str[i];
        }

        cout << "\n";
    }
}
