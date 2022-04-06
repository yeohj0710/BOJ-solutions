#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    cout << fixed;
    cout.precision(4);

    int T; cin >> T;

    while(T--) {
        double value; cin >> value;
        string str; cin >> str;

        if(str == "kg") cout << value*2.2046 << " lb\n";
        else if(str == "lb") cout << value*0.4536 << " kg\n";
        else if(str == "l") cout << value*0.2642 << " g\n";
        else if(str == "g") cout << value*3.7854 << " l\n";
    }
}
