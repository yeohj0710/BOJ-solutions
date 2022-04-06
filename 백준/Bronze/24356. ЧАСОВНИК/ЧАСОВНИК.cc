#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int t1, m1, t2, m2; cin >> t1 >> m1 >> t2 >> m2;
    int sum = (t2*60 + m2) - (t1*60 + m1);

    if(sum < 0) sum += 24*60;

    cout << sum << " " << sum/30;
}
