#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    vector<int> arr;
    int cnt = 0;
    while(N--) {
        int val; cin >> val;
        bool check = false;
        for(int i=0; i<arr.size(); i++)
            if(arr[i] == val) cnt++, check = true;
        if(!check) arr.push_back(val);
    }
    cout << cnt;
}
