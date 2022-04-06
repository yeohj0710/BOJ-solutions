#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    string str; cin >> str;

    bool check = true;
    for(int i=1; i<N*2; i++)
        if(str[i] == str[i-1]) check = false;

    if(check) cout << "Yes";
    else cout << "No";
}
