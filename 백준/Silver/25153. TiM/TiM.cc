#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M; cin >> N >> M;

    int a = 0, b = 0, c = 0, d = 0;
    char ch = '+';
    string num = "";

    while(M--) {
        char x; cin >> x;

        if(x == '+' || x == '-') {
            if(num != "") {
                if(ch == '+') b += stoi(num);
                else b -= stoi(num);

                d += abs(stoi(num));

                num = "";
            }

            ch = x;
        }
        else if(x == 'X') {
            if(ch == '+') a++;
            else a--;
        }
        else {
            c += x - '0';

            num += x;
        }
    }

    if(num != "") {
        if(ch == '+') b += stoi(num);
        else b -= stoi(num);

        d += abs(stoi(num));

        num = "";
    }

    cout << c << "\n";
    cout << d << "\n";
    cout << b / (-a) << "\n";
}
