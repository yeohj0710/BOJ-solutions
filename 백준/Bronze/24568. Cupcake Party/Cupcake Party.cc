#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;
    int temp = a*8 + b*3;

    if(temp <= 28) cout << "0";
    else cout << temp - 28;
}
