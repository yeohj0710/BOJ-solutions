#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    long long d, n, s, p;
    cin >> T;
    while(T--) {
        cin >> d >> n >> s >> p;
        if(n*s > d+n*p) cout << "parallelize";
        else if(n*s < d+n*p) cout << "do not parallelize";
        else cout << "does not matter";
        cout << "\n";
    }
}
