#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int val; cin >> val;
        if(val == 0) break;
        int sum = 0;
        while(val) {
            sum += val*val;
            val--;
        }
        cout << sum << "\n";
    }
}
