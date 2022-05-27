#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int M, D; cin >> D >> M;

    int add[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int sum = 0;

    for(int i=1; i<M; i++) sum += add[i-1];

    sum += D;

    string ans[7] = {"Wednesday", "Thursday", "Friday", "Saturday", "Sunday",
                      "Monday", "Tuesday"};

    cout << ans[sum % 7] << "\n";
}
