#include <bits/stdc++.h>
using namespace std;

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        int arr[3][6];

        int input[3];
        scanf("%02d:%02d:%02d", &input[0], &input[1], &input[2]);

        for(int i=0; i<3; i++)
            for(int j=0; j<6; j++) {
                if(input[i] >= pow(2, 5-j)) {
                    arr[i][j] = 1;
                    input[i] -= pow(2, 5-j);
                }
                else arr[i][j] = 0;
            }

        for(int j=0; j<6; j++)
            for(int i=0; i<3; i++) cout << arr[i][j];

        cout << " ";

        for(int i=0; i<3; i++)
            for(int j=0; j<6; j++) cout << arr[i][j];

        cout << "\n";
    }
}
