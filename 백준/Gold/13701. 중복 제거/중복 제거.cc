#include <bits/stdc++.h>
using namespace std;

int arr[1<<20] = {};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N;

    while(cin >> N) {
        int q = N / (1 << 5);
        int r = N % (1 << 5);

        if(!(arr[q] & (1 << r))) {
            cout << N << " ";

            arr[q] += (1 << r);
        }
    }
}
