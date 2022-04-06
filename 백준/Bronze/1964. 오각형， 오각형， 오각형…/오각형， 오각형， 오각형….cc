#include <iostream>
using namespace std;

int main() {
    int n, sum;
    cin >> n;
    if(n == 1) printf("5");
    else {
        sum = 5;
        for(int i=2; i<=n; i++) sum = (sum + 7+3*(i-2))%45678;
        printf("%d", sum);
    }
}
