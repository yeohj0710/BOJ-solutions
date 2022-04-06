#include <bits/stdc++.h>
using namespace std;

int main() {
    int Count = 1;
    while(true) {
        double a, b, c;
        cin >> a >> b >> c;
        if(!a && !b && !c) break;
        cout << "Triangle #" << Count << "\n";

        if(a == -1) {
            if(c*c-b*b > 0) printf("a = %.3lf", sqrt(c*c-b*b));
            else cout << "Impossible.";
        }
        else if(b == -1) {
            if(c*c-a*a > 0) printf("b = %.3lf", sqrt(c*c-a*a));
            else cout << "Impossible.";
        }
        else printf("c = %.3lf", sqrt(a*a+b*b));

        cout << "\n\n";
        Count++;
    }
}
