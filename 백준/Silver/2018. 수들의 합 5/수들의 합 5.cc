#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int i = 1, j = 1, sum = 0, cnt = 0;
    while(i <= j && j <= N+1) {
        if(sum < N) {
            sum += j;
            j++;
        }
        else {
            if(sum == N) cnt++;

            sum -= i;
            i++;
        }
    }

    cout << cnt;
}
