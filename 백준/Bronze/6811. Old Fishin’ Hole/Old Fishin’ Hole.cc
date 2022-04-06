#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b, c, total;
    cin >> a >> b >> c >> total;

    int cnt = 0;
    for(int i=0; i*a<=total; i++)
        for(int j=0; i*a+j*b<=total; j++)
            for(int k=0; i*a+j*b+k*c<=total; k++) {
                if(!i && !j && !k) continue;
                cout << i << " Brown Trout, " << j << " Northern Pike, " << k << " Yellow Pickerel\n";
                cnt++;
            }

    cout << "Number of ways to catch fish: " << cnt;
}
