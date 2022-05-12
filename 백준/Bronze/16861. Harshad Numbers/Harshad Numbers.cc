#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    while(true) {
        int temp = N;

        int sum = 0;
        while(temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        if(N % sum == 0) break;
        else N++;
    }

    cout << N << "\n";
}
