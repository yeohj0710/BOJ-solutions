#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, cnt[10] = {}, add = 0;
    cin >> N;

    for(int i=1; N!=0; i*=10) {
        int curr = N%10;
        N /= 10;

        cnt[0] -= i;
        for(int j=0; j<curr; j++) cnt[j] += (N+1)*i;
        cnt[curr] += N*i + 1 + add;
        for(int j=curr+1; j<=9; j++) cnt[j] += N*i;

        add += curr*i;
    }

    for(int i=0; i<=9; i++) cout << cnt[i] << " ";
}
