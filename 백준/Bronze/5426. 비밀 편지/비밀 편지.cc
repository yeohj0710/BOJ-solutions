#include <bits/stdc++.h>
#define MAX 101
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        string str; cin >> str;
        int N = sqrt(str.length());

        char a[MAX][MAX];

        int idx = 0;
        for(int i=0; i<N; i++)
            for(int j=0; j<N; j++) {
                a[i][j] = str[idx];
                idx++;
            }

        for(int j=N-1; j>=0; j--)
            for(int i=0; i<N; i++) cout << a[i][j];

        cout << "\n";
    }
}
