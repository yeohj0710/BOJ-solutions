#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string str; int a, b;
        cin >> str >> a >> b;
        if(str == "#" && a == 0 && b == 0) break;
        cout << str << " ";
        if(a > 17 || b >= 80) cout << "Senior\n";
        else cout << "Junior\n";
    }
}
