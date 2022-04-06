#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, X, K;
    cin >> N >> X >> K;
    while(K--) {
        int a, b;
        cin >> a >> b;
        if(X == a) X = b;
        else if(X == b) X = a;
    }
    cout << X;
}
