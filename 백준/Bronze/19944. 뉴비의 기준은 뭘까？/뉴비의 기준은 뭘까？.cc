#include <iostream>
using namespace std;

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    if(M == 1 || M == 2) printf("NEWBIE!");
    else if(M <= N) printf("OLDBIE!");
    else printf("TLE!");
}
