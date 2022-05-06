#include <bits/stdc++.h>
using namespace std;

bool cmp(int &a, int &b) {
    if(a % 2 == 1 && b % 2 == 0) return true;
    else if(a % 2 == 0 && b % 2 == 1) return false;
    else if(a % 2 == 1 && b % 2 == 1) return a > b;
    else if(a % 2 == 0 && b % 2 == 0) return a > b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    vector<int> arr, comb;

    for(int i=0; i<3; i++) {
        int val; cin >> val;

        arr.push_back(val);
        comb.push_back(val);
    }

    for(int i=0; i<3; i++)
        for(int j=i+1; j<3; j++) comb.push_back(arr[i]*arr[j]);

    comb.push_back(arr[0]*arr[1]*arr[2]);

    sort(comb.begin(), comb.end(), cmp);

    cout << comb[0] << "\n";
}
