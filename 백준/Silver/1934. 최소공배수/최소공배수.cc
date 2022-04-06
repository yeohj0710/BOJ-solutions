#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b) {
    if(a < b) swap(a, b);
    while(b != 0) {
        int temp = a%b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;
    while(T--) {
        int a, b; cin >> a >> b;
        cout << a*b/GCD(a, b) << "\n";
    }
}
