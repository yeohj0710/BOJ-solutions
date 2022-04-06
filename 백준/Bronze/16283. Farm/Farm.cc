#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, n, w, ans_i, ans_j, check = 0;
    cin >> a >> b >> n >> w;
    for(int i=1; i<n; i++) {
        int j = n-i;
        if(i*a+b*j == w) {
            ans_i = i;
            ans_j = j;
            check++;
        }
    }
    if(check == 1) cout << ans_i << " " << ans_j;
    else cout << "-1";
}
