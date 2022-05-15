#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string str; cin >> str;

    bool check = false;
    for(int i=0; i<N; i++)
        for(int j=i+1; j<N; j++)
            for(int k=j+1; k<N; k++)
                if(str[i] == 'I' && str[j] == 'O' && str[k] == 'I') check = true;

    if(check) cout << "Yes\n";
    else cout << "No\n";
}
