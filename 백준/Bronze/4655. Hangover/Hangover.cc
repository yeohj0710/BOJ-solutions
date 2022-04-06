#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        double a; cin >> a;
        if(a == 0) break;

        double sum = 0; int i = 0;
        for(i=2; sum < a; i++) sum += 1.0/i;

        cout << i-2 << " card(s)\n";
    }
}
