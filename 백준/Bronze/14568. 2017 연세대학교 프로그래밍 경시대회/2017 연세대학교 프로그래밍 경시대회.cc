#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Count = 0;
    cin >> N;
    for(int a=1; a<N; a++)
        for(int b=1; b<N; b++)
            for(int c=1; c<N; c++)
                if(a+b+c == N && a >= b+2 && c%2 == 0) Count++;
    cout << Count;
}
