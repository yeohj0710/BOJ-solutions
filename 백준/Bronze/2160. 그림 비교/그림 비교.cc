#include <bits/stdc++.h>
#define int long long
using namespace std;

char arr[1001][5][7];

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    cin.ignore();

    for(int i=0; i<N; i++)
        for(int j=0; j<5; j++) {
            for(int k=0; k<7; k++) cin >> arr[i][j][k];
            cin.ignore();
        }

    int a, b, Min = INT_MAX;

    for(int i=0; i<N; i++)
        for(int j=i+1; j<N; j++) {
            int cnt = 0;
            for(int k=0; k<5; k++)
                for(int l=0; l<7; l++)
                    if(arr[i][k][l] != arr[j][k][l]) cnt++;

            if(cnt < Min) {
                Min = cnt;

                a = i;
                b = j;
            }
        }

    cout << a + 1 << " " << b + 1 << "\n";
}
