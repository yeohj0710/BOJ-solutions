#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string str; cin >> str;
        if(str == "#") break;

        int a, b, c; cin >> a >> b >> c;

        bool check = true;
        if(a < 31 || (a == 31 && b <= 4)) check = false;

        if(!check) cout << "HEISEI " << a << " " << b << " " << c << "\n";
        else cout << "? " << a - 30 << " " << b << " " << c << "\n";
    }
}
