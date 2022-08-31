#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; scanf("%02d:%02d", &a, &b);

    int v[10][10] = {{0, 4, 3, 4, 3, 2, 3, 2, 1, 2},
                     {4, 0, 1, 2, 1, 2, 3, 2, 3, 4},
                     {3, 1, 0, 1, 2, 1, 2, 3, 2, 3},
                     {4, 2, 1, 0, 3, 2, 1, 4, 3, 2},
                     {3, 1, 2, 3, 0, 1, 2, 1, 2, 3},
                     {2, 2, 1, 2, 1, 0, 1, 2, 1, 2},
                     {3, 3, 2, 1, 2, 1, 0, 3, 2, 1},
                     {2, 2, 3, 4, 1, 2, 3, 0, 1, 2},
                     {1, 3, 2, 3, 2, 1, 2, 1, 0, 1},
                     {2, 4, 3, 2, 3, 2, 1, 2, 1, 0}};

    int Min = INT_MAX, x, y;

    for(int i=0; i<100; i++)
        for(int j=0; j<100; j++) {
            if(i % 24 != a || j % 60 != b) continue;

            int sum = v[i/10][i%10] + v[i%10][j/10] + v[j/10][j%10];

            if(sum < Min) {
                Min = sum;
                x = i, y = j;
            }
        }

    printf("%02d:%02d\n", x, y);
}
