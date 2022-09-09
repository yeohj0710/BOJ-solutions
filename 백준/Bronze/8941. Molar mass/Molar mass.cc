#include <bits/stdc++.h>
#define int long long
using namespace std;

double f(char c, int x) {
    double sum = 0;

    if(c == 'C') sum += 12.01;
    else if(c == 'H') sum += 1.008;
    else if(c == 'O') sum += 16.00;
    else if(c == 'N') sum += 14.01;

    return sum * x;
}

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(3);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;

        int i = 0;
        char c;
        string tmp = "";
        double ans = 0;

        while(i < str.length()) {
            c = str[i];
            i++;

            while(i < str.length() && (str[i] >= '0' && str[i] <= '9')) {
                tmp += str[i];
                i++;
            }

            if(tmp == "") ans += f(c, 1);
            else ans += f(c, stoi(tmp));

            tmp = "";
        }

        cout << ans << "\n";
    }
}
