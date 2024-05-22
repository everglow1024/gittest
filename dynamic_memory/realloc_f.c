#include <stdio.h>
#include <stdlib.h>
int main() {
    int *a = malloc(sizeof(int) * 10); 
    if (a == NULL) {
        return 1;
    }
    
    printf("%p\n", (void*)a);
    printf("%zu\n", sizeof(a));

    int *temp = realloc(a, sizeof(int) * 80);  // 避免没有失败申请地址后导致地址泄漏；
    if (temp == NULL) {

        free(a); 
        return 1;
    }
    a = temp; 

    printf("%p\n", (void*)a);
    printf("%zu\n", sizeof(a));

    free(a);

    return 0;
}