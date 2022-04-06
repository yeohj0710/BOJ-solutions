#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    char c;
    int temp = 0, sum = 0;

    while(cin >> c) {
        if(c >= '0' && c <= '9') temp = temp*10 + (c - '0');
        else {
            sum += temp;
            temp = 0;
        }
    }
    sum += temp;

    cout << sum;
}
