#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string str; cin >> str;

    for(int i=0; i<N-1; i++)
        if(str[i+1] == 'J') cout << str[i] << "\n";
}
