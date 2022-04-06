#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int a, b; cin >> a >> b;
        string str; cin >> str;

        for(int i=0; i<str.length(); i++)
            cout << char((a*(str[i] - 'A') + b) % 26 + 'A');
        cout << "\n";
    }
}
