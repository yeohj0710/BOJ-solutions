#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, val;
    long long sum = 0;
    cin >> N;
    while(N--) {
        cin >> val;
        sum += pow(val/10, val%10);
    }
    cout << sum;
}
