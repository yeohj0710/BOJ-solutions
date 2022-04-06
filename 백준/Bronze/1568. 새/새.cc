#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K = 1, Count = 0;
    cin >> N;
    while(N > 0) {
        if(K > N) K = 1;
        N -= K;
        K++;
        Count++;
    }
    cout << Count;
}