#include <stdio.h>
#include <string.h>

int main() {
    char A[1005], B[1005];
    scanf("%s %s", A, B);
    if(strlen(A) >= strlen(B)) printf("go");
    else printf("no");
}
