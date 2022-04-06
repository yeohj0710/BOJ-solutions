#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    int i = 1, j = 1, k = 1, cnt = 0;
    while(true) {
        while(true) {
            cnt++;
            if(cnt == N) {
                cout << i << " " << j;
                return 0;
            }
            if(i == 1 && j == k) break;
            i--, j++;
        }
        k++;
        i = k, j = 1;
    }
}
