#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a[5], b[5];
    for(int i=0; i<5; i++) cin >> a[i];
    for(int i=0; i<5; i++) cin >> b[i];

    for(int i=0; i<5; i++)
        if(a[i] == b[i]) {
            cout << "N";
            return 0;
        }

    cout << "Y";
}
