#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
    cin.tie(0)->sync_with_stdio(0);

    int N; cin >> N;

    vector<int> v(N+1);

    for(int i=1; i<=N; i++)
        for(int j=i+1; j<=N; j++) {
            cout << "? " << i << " " << j << endl;

            string str; cin >> str;

            if(str == ">") v[i]++;
            else if(str == "<") v[j]++;
        }
    
    cout << "! ";

    for(int i=0; i<N; i++)
        for(int j=1; j<=N; j++)
            if(v[j] == i) cout << j << " ";

    cout << endl;
}
