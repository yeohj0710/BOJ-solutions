#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str; cin >> str;

    double avg = 0;
    int cnt = 0;

    for(int i=0; i<str.length(); i++) {
        if(str[i] == '1' && i+1 < str.length() && str[i+1] == '0') {
            avg += 10;
            i++;
        }
        else avg += str[i] - '0';

        cnt++;
    }

    avg /= cnt;

    cout << fixed;
    cout.precision(2);

    cout << avg << "\n";
}
