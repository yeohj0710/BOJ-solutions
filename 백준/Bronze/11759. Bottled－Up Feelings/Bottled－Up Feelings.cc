#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int s, a, b; cin >> s >> a >> b;

    int sum = INT_MAX, x = INT_MAX, y = INT_MAX;
    for(int i=s/a; i>=0; i--) {
        if((s - i*a) % b == 0)
            if(i + (s - i*a)/b < sum) {
                sum = i + (s - i*a)/b;
                x = i;
                y = (s - i*a)/b;
            }
    }

    if(x != INT_MAX && y != INT_MAX) cout << x << " " << y << "\n";
    else cout << "Impossible\n";
}
