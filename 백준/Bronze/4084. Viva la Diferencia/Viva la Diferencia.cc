#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    int temp_a, temp_b, temp_c, temp_d;
    while(true) {
        cin >> a >> b >> c >> d;
        if(!a && !b && !c && !d) break;
        int Count = 0;
        while(true) {
            if(a == b && b == c && c == d) break;
            temp_a = a, temp_b = b, temp_c = c, temp_d = d;
            a = abs(temp_a-temp_b), b = abs(temp_b-temp_c);
            c = abs(temp_c-temp_d), d = abs(temp_d-temp_a);
            Count++;
        }
        cout << Count << "\n";
    }
}
