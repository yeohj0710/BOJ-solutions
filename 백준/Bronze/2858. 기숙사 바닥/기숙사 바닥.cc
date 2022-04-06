#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int R, B; cin >> R >> B;

    for(int i=1; i<=B; i++)
        for(int j=1; i*j<=B; j++)
            if(i*j == B && (i+2)*(j+2) - i*j == R) {
                if(i < j) swap(i, j);
                cout << i+2 << " " << j+2;
                return 0;
            }
}
