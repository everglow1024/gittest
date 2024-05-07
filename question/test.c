#include <stdio.h>

int main() {
    int a = 5;
    printf("a = %d\n", a);  // 输出：a = 5
    printf("a++ = %d\n", a++); // 输出：a++ = 5，然后a增加到6
    printf("a = %d\n", a);  // 输出：a = 6

    a = 5;
    printf("a = %d\n", a);  // 输出：a = 5
    printf("++a = %d\n", ++a); // 输出：++a = 6，a增加到6
    printf("a = %d\n", a);  // 输出：a = 6
    return 0;
}
