# include <stdio.h>

int isPrime();

int main()
{
    int a = 0;
    int i = 0;

    scanf("%d", &a);

    if (isPrime(a)) {
            printf("%d是素数。\n", a);
        } else {
            printf("%d不是素数。\n", a);
        }
    return 0;
}

int isPrime(int num) {
    if (num <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= num; i++) {
        printf("%d\n",(i));
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1; 
}