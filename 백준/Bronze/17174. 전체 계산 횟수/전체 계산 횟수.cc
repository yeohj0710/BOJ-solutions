#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int sum = 0;
    while(N) {
        sum += N;
        N /= M;
    }
    cout << sum;
}
