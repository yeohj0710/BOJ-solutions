#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int sum = 5000, val;
    while(cin >> val) {
        if(val == 1) sum -= 500;
        else if(val == 2) sum -= 800;
        else if(val == 3) sum -= 1000;
    }

    cout << sum << "\n";
}
