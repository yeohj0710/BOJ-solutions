#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, temp;
    double a, b, c, d;
    cin >> T;
    for(int i=1; i<=T; i++) {
        cin >> temp >> a >> b >> c >> d;
       printf("%d %.3lf\n", i, a/(b+c)*d);
    }
}
