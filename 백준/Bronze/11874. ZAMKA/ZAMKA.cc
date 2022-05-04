#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c; cin >> a >> b >> c;

    int Min = INT_MAX, Max = 0;
    for(int i=a; i<=b; i++) {
        int sum = 0, temp = i;
        while(temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        if(sum == c) {
            Min = min(Min, i);
            Max = max(Max, i);
        }
    }

    cout << Min << "\n" << Max << "\n";
}
