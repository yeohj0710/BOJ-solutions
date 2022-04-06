#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int n; cin >> n;

    for(int i=2; i<n; i++)
        if(n % i != 0) {
            cout << i << " ";
            break;
        }

    for(int i=n-1; i>1; i--)
        if(n % i != 0) {
            cout << i;
            break;
        }
}
