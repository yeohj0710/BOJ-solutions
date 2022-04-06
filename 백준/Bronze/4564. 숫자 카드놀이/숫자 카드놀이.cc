#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;

        if(N == 0) break;

        cout << N << " ";

        while(N >= 10) {

            int temp = 1;

            while(N > 0) {
                temp *= N%10;
                N /= 10;
            }

            N = temp;
            cout << N << " ";
        }
        cout << "\n";
    }
}
