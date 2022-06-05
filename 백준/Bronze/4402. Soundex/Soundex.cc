#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string str;

    while(cin >> str) {
        vector<int> v(str.length());

        for(int i=0; i<str.length(); i++) {
            char c = str[i];

            if(c == 'B' || c == 'F' || c == 'P' || c == 'V') v[i] = 1;
            else if(c == 'C' || c == 'G' || c == 'J' || c == 'K'
                    || c == 'Q' || c == 'Q' || c == 'S' || c == 'X' || c == 'Z') v[i] = 2;
            else if(c == 'D' || c == 'T') v[i] = 3;
            else if(c == 'L') v[i] = 4;
            else if(c == 'M' || c == 'N') v[i] = 5;
            else if(c == 'R') v[i] = 6;

            if(i == 0 && v[i] != 0) cout << v[i];
            else if(i > 0 && v[i-1] != v[i] && v[i] != 0) cout << v[i];
        }
        cout << "\n";
    }
}
