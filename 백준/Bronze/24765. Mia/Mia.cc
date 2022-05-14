#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int a, b, c, d; cin >> a >> b >> c >> d;
        if(a == 0 && b == 0 && c == 0 && d == 0) break;

        if(a < b) swap(a, b);
        if(c < d) swap(c, d);

        int winner;

        if(a == 2 && b == 1 && c == 2 && d == 1) winner = 0;
        else if(a == 2 && b == 1) winner = 1;
        else if(c == 2 && d == 1) winner = 2;
        else if(a == b && c == d) {
            if(a == c) winner = 0;
            else if(a > c) winner = 1;
            else if(a < c) winner = 2;
        }
        else if(a == b) winner = 1;
        else if(c == d) winner = 2;
        else if(a*10 + b == c*10 + d) winner = 0;
        else if(a*10 + b > c*10 + d) winner = 1;
        else if(a*10 + b < c*10 + d) winner = 2;

        if(winner == 0) cout << "Tie.\n";
        else if(winner == 1) cout << "Player 1 wins.\n";
        else if(winner == 2) cout << "Player 2 wins.\n";
    }
}
