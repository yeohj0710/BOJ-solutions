#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int> v(10);

    for(int i=0; i<10; i++) cin >> v[i];

    int sum = 0;

    for(int i=0; i<10; i++)
        for(int j=i+1; j<10; j++)
            if(v[i] == 1 || v[j] == 1) sum++;

    for(int i=0; i<10; i++)
        for(int j=i+1; j<10; j++)
            for(int k=j+1; k<10; k++)
                if(v[i] == 1 || v[j] == 1 || v[k] == 1) sum++;

    if(sum % 2 == 0) cout << 0 << "\n";
    else cout << 1 << "\n";
}
