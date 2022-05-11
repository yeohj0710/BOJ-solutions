#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int a = 0, b = 0, c = 0;

    for(int i=0; i<N; i++) {
        char ch; cin >> ch;

        if(ch == 'J') a++;
        else if(ch == 'O') b++;
        else c++;
    }

    for(int i=0; i<a; i++) cout << "J";
    for(int i=0; i<b; i++) cout << "O";
    for(int i=0; i<c; i++) cout << "I";
    cout << "\n";
}
