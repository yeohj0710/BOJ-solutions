#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, M;

    while(cin >> N >> M) {
        vector<int> v;

        for(int i=1; i<=N; i++) {
            bool check = true;

            for(int j=2; j<i; j++)
                if(i % j == 0) check = false;

            if(check) v.push_back(i);
        }

        cout << N << " " << M << ": ";

        for(int i=max((int)0, (int)((v.size() + 1)/2 - M)); i<min((int)v.size(), (int)(v.size()/2 + M)); i++)
            cout << v[i] << " ";

        cout << "\n\n";
    }
}
