#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int A, B; cin >> A >> B;

    int arr[1001], cnt = 1;
    for(int i=1, j=1; i<=B; i++, j++) {
        arr[i] = cnt;
        if(j == cnt) j = 0, cnt++;
    }

    int sum = 0;
    for(int i=A; i<=B; i++) sum += arr[i];

    cout << sum;
}
