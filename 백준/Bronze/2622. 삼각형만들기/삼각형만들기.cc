#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int cnt = 0;

    for(int i=1; i<=N; i++)
        for(int j=i; i+j<=N; j++) {
            int k = N - i - j;
            if(k >= j && i+j > k && j+k > i && k+i > j) cnt++;
        }

    cout << cnt;
}
