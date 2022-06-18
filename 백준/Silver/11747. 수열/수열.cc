#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string str = "";
    for(int i=0; i<N; i++) {
        int x; cin >> x;
        str += char(x + '0');
    }

    for(int i=0; ; i++) {
        string num = to_string(i);

        bool check = false;
        for(int j=0; j<N-num.length()+1; j++)
            if(str.substr(j, num.length()) == num) check = true;

        if(!check) {
            cout << i << "\n";
            break;
        }
    }
}
