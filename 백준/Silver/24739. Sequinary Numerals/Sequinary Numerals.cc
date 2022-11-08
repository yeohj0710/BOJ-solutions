#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    int sum = 0;

    for(int i=0; i<str.length(); i++) {
        int tmp = str[i] - '0';

        for(int j=0; j<str.length()-i-1; j++) tmp *= 3;
        for(int j=0; j<i; j++) tmp *= 2;

        sum += tmp;
    }

    int div = 1;

    for(int i=0; i<str.length()-1; i++) div *= 2;

    int gcd = __gcd(sum, div);

    sum /= gcd;
    div /= gcd;

    cout << sum / div << " ";

    if(sum % div > 0) cout << sum % div << "/" << div;

    cout << "\n";
}
