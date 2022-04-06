#include <stdio.h>
#include <string.h>

int main() {
    int sum = 10;
    char plate[100];
    scanf("%s", plate);
    for(int i=1; i<strlen(plate); i++) {
        if(plate[i] == plate[i-1]) sum += 5;
        else sum += 10;
    }
    printf("%d", sum);
}
