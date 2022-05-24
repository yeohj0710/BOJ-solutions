#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int T; cin >> T;

    while(T--) {
        vector<int> v(4);

        for(int i=0; i<4; i++) cin >> v[i];

        sort(v.begin(), v.end());

        int a = 0, b = 0, c = 0;

        for(int i=0; i<4; i++)
            for(int j=i+1; j<4; j++)
                for(int k=j+1; k<4; k++) {
                    if(v[i] + v[j] <= v[k]) continue;

                    if(v[i]*v[i] + v[j]*v[j] == v[k]*v[k]) a++;
                    else if(v[i]*v[i] + v[j]*v[j] > v[k]*v[k]) b++;
                    else if(v[i]*v[i] + v[j]*v[j] < v[k]*v[k]) c++;
                }

        cout << a << " " << b << " " << c << "\n";
    }
}
