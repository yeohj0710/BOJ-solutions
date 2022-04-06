#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    while(true) {
        vector<int> arr;

        int value; cin >> value;
        if(value == -1) break;
        else arr.push_back(value);

        while(true) {
            int value; cin >> value;
            if(value == 0) break;
            arr.push_back(value);
        }

        int cnt = 0;
        for(int i=0; i<arr.size(); i++)
            for(int j=i+1; j<arr.size(); j++)
                if(arr[i]*2 == arr[j] || arr[i] == arr[j]*2) cnt++;

        cout << cnt << "\n";
    }
}
