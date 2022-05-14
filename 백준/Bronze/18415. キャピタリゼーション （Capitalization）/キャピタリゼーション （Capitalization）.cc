#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string str; cin >> str;

    vector<bool> check(N);

    for(int i=2; i<N; i++)
        if(str[i-2] == 'j' && str[i-1] == 'o' && str[i] == 'i') check[i-2] = check[i-1] = check[i] = true;

    for(int i=0; i<N; i++) {
        if(check[i]) cout << char(str[i] - 'a' + 'A');
        else cout << str[i];
    }
}
