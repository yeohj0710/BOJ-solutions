#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int sum = 0, N;
        cin >> N;
        for(int i=1; i<=N; i+=2) sum += i;
        cout << sum << "\n";
    }
}
