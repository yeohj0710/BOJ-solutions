#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a = 0, b = 0, c = 0;

    vector<double> x(3);

    while(true) {
        cin >> x[0] >> x[1] >> x[2];

        sort(x.begin(), x.end());

        if(x[0] + x[1] <= x[2]) break;
        else if(x[0]*x[0] + x[1]*x[1] == x[2]*x[2]) a++;
        else if(x[0]*x[0] + x[1]*x[1] > x[2]*x[2]) b++;
        else if(x[0]*x[0] + x[1]*x[1] < x[2]*x[2]) c++;
    }

    cout << a+b+c << " " << a << " " << b << " " << c << "\n";
}
