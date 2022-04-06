#include <iostream>
#include <string>
using namespace std;

int main() {
    int T, a, b, sum;
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        sum = 0;
        scanf("%d %d", &a, &b);
        if(!a) sum += 0;
        else if(a <= 1) sum += 500;
        else if(a <= 3) sum += 300;
        else if(a <= 6) sum += 200;
        else if(a <= 10) sum += 50;
        else if(a <= 15) sum += 30;
        else if(a <= 21) sum += 10;
        if(!b) sum += 0;
        else if(b <= 1) sum += 512;
        else if(b <= 3) sum += 256;
        else if(b <= 7) sum += 128;
        else if(b <= 15) sum += 64;
        else if(b <= 31) sum += 32;
        printf("%d\n", sum*10000);
    }
}
