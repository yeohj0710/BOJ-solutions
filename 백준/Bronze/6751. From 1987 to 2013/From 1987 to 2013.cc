#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    for(int i=N+1; ; i++) {
        string str = to_string(i);

        bool check = true;
        for(int j=0; j<str.length(); j++)
            for(int k=j+1; k<str.length(); k++)
                if(str[j] == str[k]) check = false;

        if(check) {
            cout << i << "\n";
            break;
        }
    }
}
