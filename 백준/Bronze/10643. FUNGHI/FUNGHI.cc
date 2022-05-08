#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int arr[8];
    for(int i=0; i<8; i++) cin >> arr[i];

    int Max = 0;
    for(int i=0; i<8; i++) {
        int sum = 0;
        for(int j=0; j<4; j++) sum += arr[(i+j) % 8];

        Max = max(Max, sum);
    }

    cout << Max << "\n";
}
