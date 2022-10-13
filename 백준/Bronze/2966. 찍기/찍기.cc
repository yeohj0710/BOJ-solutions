#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    string str; cin >> str;

    int a = 0, b = 0, c = 0;

    for(int i=0; i<N; i++) {
        if(i % 3 == 0 && str[i] == 'A') a++;
        else if(i % 3 == 1 && str[i] == 'B') a++;
        else if(i % 3 == 2 && str[i] == 'C') a++;
    }

    for(int i=0; i<N; i++) {
        if(i % 4 == 0 && str[i] == 'B') b++;
        if(i % 4 == 1 && str[i] == 'A') b++;
        if(i % 4 == 2 && str[i] == 'B') b++;
        if(i % 4 == 3 && str[i] == 'C') b++;
    }

    for(int i=0; i<N; i++) {
        if(i % 6 == 0 && str[i] == 'C') c++;
        if(i % 6 == 1 && str[i] == 'C') c++;
        if(i % 6 == 2 && str[i] == 'A') c++;
        if(i % 6 == 3 && str[i] == 'A') c++;
        if(i % 6 == 4 && str[i] == 'B') c++;
        if(i % 6 == 5 && str[i] == 'B') c++;
    }

    int Max = max(max(a, b), c);

    cout << Max << "\n";

    if(a == Max) cout << "Adrian\n";
    if(b == Max) cout << "Bruno\n";
    if(c == Max) cout << "Goran\n";
}
