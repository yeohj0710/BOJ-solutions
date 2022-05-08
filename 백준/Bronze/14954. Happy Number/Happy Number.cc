#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N; cin >> N;

    vector<int> arr;
    arr.push_back(N);

    while(true) {
        int temp = 0;

        while(N > 0) {
            temp += (N % 10) * (N % 10);
            N /= 10;
        }
        N = temp;

        if(temp == 1) {
            cout << "HAPPY\n";
            break;
        }

        bool check = false;
        for(int i=0; i<arr.size(); i++)
            if(N == arr[i]) check = true;

        if(check) {
            cout << "UNHAPPY\n";
            break;
        }

        arr.push_back(N);
    }
}

