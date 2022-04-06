#include <bits/stdc++.h>
using namespace std;

int arr[200005];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;
    int p;
    for(int i=0; i<N; i++) {
        cin >> arr[i];
        if(arr[i] == -1) p = i;
    }
    int l, r;
    int lv = INT_MAX, rv = INT_MAX;
    for(int i=0; i<p; i++)
        if(arr[i] < lv) l = i, lv = arr[i];
    for(int i=p+1; i<N; i++)
        if(arr[i] < rv) r = i, rv = arr[i];
    cout << lv + rv;
}
