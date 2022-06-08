#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    for(int t=1; t<=T; t++) {
        string str; cin >> str;

        cout << "Case #" << t << ": " << str << " is ruled by";

        if(str.back() == 'y' || str.back() == 'Y') {
            cout << " nobody.\n";
            continue;
        }

        string a = "aeiouAEIOU";
        bool check = false;

        for(int i=0; i<a.length(); i++)
            if(str.back() == a[i]) check = true;

        if(check) {
            cout << " a queen.\n";
            continue;
        }

        cout << " a king.\n";
    }
}
