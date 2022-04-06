#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    bool check = true;

    for(int i=2; i<N; i++)
        if(N % i == 0) check = false;

    string str; cin >> str;
    int M = stoi(str + to_string(N));

    for(int i=2; i<M; i++)
        if(M % i == 0) check = false;

    if(check) cout << "Yes";
    else cout << "No";
}
