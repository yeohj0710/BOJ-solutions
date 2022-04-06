#include <stdio.h>
#include <string.h>

int main() {
    int T;
    char word[1005];
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        scanf("%s", word);
        printf("%c%c\n", word[0], word[strlen(word)-1]);
    }
}
