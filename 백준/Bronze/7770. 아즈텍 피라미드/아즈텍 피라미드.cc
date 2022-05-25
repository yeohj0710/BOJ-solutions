#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int sum = 1, temp = 0, temp2 = 1;

    for(int i=1; ; i++) {
        temp += 4;
        temp2 += temp;
        sum += temp2;

        if(N < sum) {
            cout << i << "\n";
            break;
        }
    }
}
