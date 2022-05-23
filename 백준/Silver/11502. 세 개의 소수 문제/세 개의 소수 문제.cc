#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<bool> p(150001, true);

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int i=2; i*i<=150000; i++)
        for(int j=2; i*j<=150000; j++) p[i*j] = false;

    vector<int> v;

    for(int i=2; i<=1000; i++)
        if(p[i]) v.push_back(i);


    int T; cin >> T;

    while(T--) {
        int x; cin >> x;

        bool check = false;

        for(int i=0; i<v.size(); i++)
            for(int j=i; j<v.size(); j++)
                for(int k=j; k<v.size(); k++)
                    if(v[i] + v[j] + v[k] == x && !check) {
                        cout << v[i] << " " << v[j] << " " << v[k] << "\n";
                        check = true;
                    }

        if(!check) cout << 0 << "\n";
    }
}
