#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int K; cin >> K;

    string str; cin >> str;

    char arr[201][201];

    int L = str.length();
    for(int i=0; i<L/K; i++) {
        if(i % 2 == 0)
            for(int j=0; j<K; j++) arr[i][j] = str[i*K + j];
        else
            for(int j=K-1; j>=0; j--) arr[i][j] = str[i*K + (K-j-1)];
    }

    for(int j=0; j<K; j++)
        for(int i=0; i<L/K; i++) cout << arr[i][j];
}
