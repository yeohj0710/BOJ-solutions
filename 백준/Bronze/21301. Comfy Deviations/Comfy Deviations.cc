#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    double v[10];
    for(int i=0; i<10; i++) cin >> v[i];

    double avg = 0;
    for(int i=0; i<10; i++) avg += v[i];
    avg /= 10;

    double s = 0;
    for(int i=0; i<10; i++) s += pow(v[i]-avg, 2);
    s /= 9;
    s = sqrt(s);

    if(s <= 1) cout << "COMFY\n";
    else cout << "NOT COMFY\n";
}
