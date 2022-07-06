#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str = "0";

    for(int i=1; i<500; i++) {
        int x = i;

        string temp = "";

        while(x > 0) {
            temp = char('0' + (x % 2)) + temp;

            x /= 2;
        }

        str += temp;
    }

    int a, b; cin >> a >> b;

    for(int i=0; i<5; i++) cout << str[b - 1 + a*i] << " ";
    cout << "\n";
}
