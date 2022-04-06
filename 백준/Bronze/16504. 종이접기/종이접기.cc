#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, value, sum = 0;
    cin >> N;
    for(int i=1; i<=N*N; i++) {
        cin >> value;
        sum += value;
    }
    cout << sum;
 }
