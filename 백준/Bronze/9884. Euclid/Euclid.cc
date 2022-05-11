#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;

    while(b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }

    cout << a << "\n";
}
