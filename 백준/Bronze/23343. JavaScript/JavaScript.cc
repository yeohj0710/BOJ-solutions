#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    string x, y; cin >> x >> y;

    for(int i=0; i<x.length(); i++)
        if(!(x[i] >= '0' && x[i] <= '9')) {
            cout << "NaN";
            return 0;
        }

    for(int i=0; i<y.length(); i++)
        if(!(y[i] >= '0' && y[i] <= '9')) {
            cout << "NaN";
            return 0;
        }

    cout << stoi(x) - stoi(y);
}
