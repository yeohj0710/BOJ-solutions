#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int i=1000; i<=9999; i++) {
        int temp, a = 0, b = 0, c = 0, div;

        div = 10; temp = i;
        while(temp > 0) {
            a += temp % div;
            temp /= div;
        }

        div = 12; temp = i;
        while(temp > 0) {
            b += temp % div;
            temp /= div;
        }

        div = 16; temp = i;
        while(temp > 0) {
            c += temp % div;
            temp /= div;
        }

        if(a == b && b == c) cout << i << "\n";
    }
}
