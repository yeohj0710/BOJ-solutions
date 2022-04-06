#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int arr1[5], arr2[5];
    for(int i=0; i<5; i++) cin >> arr1[i];
    for(int i=0; i<5; i++) cin >> arr2[i];

    sort(arr1, arr1+5);
    sort(arr2, arr2+5);

    int cnt = 0;
    for(int i=0; i<5; i++)
        if(arr1[i] > arr2[i]) cnt++;

    cout << cnt;
}
