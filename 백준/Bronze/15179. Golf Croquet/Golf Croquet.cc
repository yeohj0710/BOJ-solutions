#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string a, b;
    getline(cin, a);
    getline(cin, b);

    int N; cin >> N;
    string str; cin >> str;

    int x = 0, y = 0;

    for(int i=0; i<N; i++) {
        if(str[i] == 'H') {
            if(i % 2 == 0) x++;
            else y++;
        }
        else if(str[i] == 'D') {
            if(i % 2 == 0) {
                if(x == 6) x++;
                else x += 2;
            }
            else {
                if(y == 6) y++;
                else y += 2;
            }
        }
        else if(str[i] == 'O') {
            if(i % 2 == 0) y++;
            else x++;
        }

        if(x >= 7 || y >= 7) break;
    }

    cout << a << " " << x << " " << b << " " << y << ". ";

    if(x >= 7 || y >= 7) {
        if(x > y) cout << a;
        else cout << b;

        cout << " has won.\n";
    }
    else if(x != y) {
        if(x > y) cout << a;
        else cout << b;

        cout << " is winning.\n";
    }
    else cout << "All square.\n";
}
