#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        string a, b; cin >> a >> b;
        if(a == "#" && b == "#") break;

        int N; cin >> N;

        int a_ = 0, b_ = 0;
        while(N--) {
            char x, y; cin >> x >> y;

            if(x == y) a_++;
            else b_++;
        }

        cout << a << " " << a_ << " " << b << " " << b_ << "\n";
    }
}
