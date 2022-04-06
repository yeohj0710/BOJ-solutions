#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        double a, b, c; cin >> a >> b >> c;
        if(a == 0 && b == 0 && c == 0) break;

        bool check = false;
        if(a <= 4.5 && b >= 150 && c >= 200) cout << "Wide Receiver ", check = true;
        if(a <= 6.0 && b >= 300 && c >= 500) cout << "Lineman ", check = true;
        if(a <= 5.0 && b >= 200 && c >= 300) cout << "Quarterback ", check = true;

        if(!check) cout << "No positions";
        cout << "\n";
    }
}
