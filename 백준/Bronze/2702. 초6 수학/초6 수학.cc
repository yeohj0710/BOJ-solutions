#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;
    while(T--) {
        int a, b; cin >> a >> b;
        int gcd, lcm;
        for(int i=1; i<=max(a, b); i++)
            if(a%i == 0 && b%i == 0) gcd = i;
        for(int i=a*b; i>=max(a, b); i--)
            if(i%a == 0 && i%b == 0) lcm = i;
        cout << lcm << " " << gcd << "\n";
    }
}
