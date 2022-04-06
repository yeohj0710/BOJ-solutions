#include <iostream>
using namespace std;

bool check[1000005] = {0, };

int main()
{
    long long Min, Max, temp, cnt = 0;
    cin >> Min >> Max;
    for(long long i=2; i*i<=Max; i++) {
        temp = Min/(i*i);
        if(Min%(i*i)) temp++;
        while(temp*i*i <= Max) {
            check[temp*i*i-Min] = 1;
            temp++;
        }
    }
    for(int i=0; i<=Max-Min; i++) if(!check[i]) cnt++;
    cout << cnt;
}
