#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i;

    while(cin >> n) {
        for(i=1; ; i++)
            if(i*(i+1)/2 >= n) break;

        cout << "TERM " << n << " IS ";

        n = n - i*(i-1)/2;

        if(i % 2) cout << i-n+1 << "/" << n << "\n";
        else cout << n << "/" << i-n+1 << "\n";
    }
}
