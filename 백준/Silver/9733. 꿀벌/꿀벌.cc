#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a[7] = {"Re", "Pt", "Cc", "Ea", "Tb", "Cm", "Ex"};
    int b[7] = {};

    string str;
    int tot = 0;

    while(cin >> str) {
        for(int i=0; i<7; i++)
            if(str == a[i]) b[i]++;
        tot++;
    }

    cout << fixed;
    cout.precision(2);

    for(int i=0; i<7; i++)
        cout << a[i] << " " << b[i] << " " << (double)b[i]/tot << "\n";

    cout << "Total " << tot << " " << 1.00 << "\n";
}
