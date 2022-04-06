#include <cstdio>
using namespace std;

int main() {
    int a, one = 0, two = 0;
    for(int i=0; i<3; i++) {
        scanf("%d", &a);
        if(a == 1) one++;
        else two++;
    }
    if(one > two) printf("1");
    else printf("2");
}
