#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int L; cin >> L;
    string a, b; cin >> a >> b;

    int cnt = 0;
    for(int i=0; i<L; i++)
        if(a[i] == 'C' && b[i] == 'C') cnt++;

    cout << cnt;
}
