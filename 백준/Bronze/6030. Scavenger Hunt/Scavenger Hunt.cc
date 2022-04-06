#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int a, b; cin >> a >> b;

    vector<int> arrA, arrB;
    for(int i=1; i<=a; i++)
        if(a % i == 0) arrA.push_back(i);
    for(int i=1; i<=b; i++)
        if(b % i == 0) arrB.push_back(i);

    for(int i=0; i<arrA.size(); i++)
        for(int j=0; j<arrB.size(); j++)
            cout << arrA[i] << " " << arrB[j] << "\n";
}
