#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, n; cin >> a >> b >> n;

    for(int i=b+a*n; i<=(a+b)*n; i+=b) cout << i << " ";
}
