#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        int N; cin >> N;
        if(N == 0) break;

        string str; cin >> str;

        for(int i=N; i<str.length(); i+=N*2) {
            for(int j=0; j<N/2; j++) swap(str[i+j], str[i+N-1-j]);
        }

        for(int i=0; i<N; i++)
            for(int j=0; j<str.length(); j+=N) cout << str[j+i];
        cout << "\n";
    }
}
