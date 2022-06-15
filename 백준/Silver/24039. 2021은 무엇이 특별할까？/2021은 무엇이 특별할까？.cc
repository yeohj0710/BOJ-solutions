#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<bool> prime(1001, true);
    for(int i=2; i*i<=1000; i++)
        for(int j=i; i*j<=1000; j++) prime[i*j] = false;

    vector<int> v;
    for(int i=2; i<=1000; i++)
        if(prime[i]) v.push_back(i);

    int N; cin >> N;

    bool check = false;
    for(int i=N+1; ; i++) {
        for(int j=0; j<v.size()-1; j++) {
            if(v[j] * v[j+1] == i) {
                cout << i << "\n";
                check = true;
                break;
            }
        }
        if(check) break;
    }
}
