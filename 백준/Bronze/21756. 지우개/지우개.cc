#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> arr(N);
    for(int i=0; i<N; i++) arr[i] = i+1;

    int Size = N;
    while(Size > 1) {
        for(int i=0; i<Size; i++) arr[i] = arr[i*2+1];
        Size /= 2;
    }

    cout << arr[0];
}
