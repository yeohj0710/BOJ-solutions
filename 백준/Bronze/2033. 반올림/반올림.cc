#include <bits/stdc++.h>
#define MAX 101
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    int temp = 10;
    while(temp < N) {
        int remain = N % temp;

        N -= remain;
        if(remain >= (temp/10)*5) N += temp;

        temp *= 10;
    }

    cout << N;
}
