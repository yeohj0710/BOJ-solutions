#include <bits/stdc++.h>
using namespace std;

int arr[5];

void f(int i, int j) {
    if(arr[i] > arr[j]) {
        swap(arr[i], arr[j]);

        for(int k=0; k<5; k++) cout << arr[k] << " ";
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    for(int i=0; i<5; i++) cin >> arr[i];

    for(int i=0; i<5; i++) {
        f(0, 1);
        f(1, 2);
        f(2, 3);
        f(3, 4);
    }
}
