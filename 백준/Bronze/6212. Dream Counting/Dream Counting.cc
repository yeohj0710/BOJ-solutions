#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;

    int cnt[10] = {};

    for(int i=a; i<=b; i++) {
        int temp = i;

        while(temp > 0) {
            cnt[temp % 10]++;
            temp /= 10;
        }
    }

    for(int i=0; i<10; i++) cout << cnt[i] << " ";
}

