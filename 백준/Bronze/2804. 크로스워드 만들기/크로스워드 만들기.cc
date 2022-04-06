#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a, b; cin >> a >> b;

    int x, y;
    for(int i=0; i<a.length(); i++) {
        bool check = false;
        for(int j=0; j<b.length(); j++)
            if(a[i] == b[j]) {
                x = i, y = j;
                check = true;
                break;
            }
        if(check) break;
    }

    for(int i=0; i<b.length(); i++) {
        if(i == y) {
            cout << a << "\n";
            continue;
        }
        for(int j=0; j<a.length(); j++) {
            if(j == x) cout << b[i];
            else cout << ".";
        }
        cout << "\n";
    }
}
